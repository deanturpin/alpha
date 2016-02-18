#include <iostream>
#include <sstream>
#include <regex>

namespace asc
{
	using namespace std;

	class bitmap
	{
		public:

			// Constructor
			bitmap(const unsigned int width, const unsigned int height)
				: bm(height, vector<bool> (width, false)) // Initialise bitmap
			{
				cout << "New " << width << " by " << height << endl;
			}

			// Add a point to the bitmap
			void set(const unsigned int x, const unsigned int y)
			{
				bm[x][y] = true;
			}

			// Render bitmap
			void render()
			{
				// Top border
				const string horizontal(bm.front().size() + 2, '-');
				cout << horizontal << endl;

				// Bitmap
				for (auto r:bm)
				{
					cout << "|";

					for (auto b:r)
						cout << (b ? 'O' : ' ');

					cout << "|" << endl;
				}

				// Bottom border
				cout << horizontal << endl;
			}

		private:

			vector<vector<bool>> bm;
	};
}

int main()
{
	using namespace std;

	// Read complete file on stdin
	stringstream file;
	file << cin.rdbuf();

	// Extract path tag
	auto f = file.str();
	smatch match;

	if (regex_search(f, match, regex("<path d=\"([^\"]*)\".*>")))
	{
		// vector<pair<double,double>> codepoints;
		vector<double> X, Y;

		// Have path, extract the points
		string path = match[1];
		while (regex_search(path, match, regex("([A-Za-z])([\\d\\.]+)\\s+([\\d\\.]+)")))
		{
			stringstream xy;
			xy << match[2] << " " << match[3];

			double x, y;
			xy >> x;
			xy >> y;
			X.push_back(x);
			Y.push_back(y);

			path = match.suffix();
		}

		// Calculate range
		const auto x_range = minmax_element(X.cbegin(), X.cend());
		const auto y_range = minmax_element(Y.cbegin(), Y.cend());

		cout << "Codepoints " << X.size() << endl;
		cout << "X " << *x_range.first << " to " << *x_range.second << endl;
		cout << "Y " << *y_range.first << " to " << *y_range.second << endl;

		// Create bitmap
		const unsigned int width = 100;
		const unsigned int height = 50;
		asc::bitmap b(width,height);

		// Populate
		auto j = X.cbegin();
		auto k = Y.cbegin();
		for (; j != X.cend() && k != Y.cend(); ++j, ++k)
		{
			const unsigned int _x = floor((height - 1) * *j / *x_range.second);
			const unsigned int _y = floor((height - 1) * *k / *y_range.second);

			b.set(_y, _x);
		}

		b.render();
	}
	else
		cout << "No match" << endl;

	return 0;
}

// M - Start a new sub-path at the given (x,y) coordinate. M (uppercase) indicates that absolute coordinates will follow; m (lowercase) indicates that relative coordinates will follow. 

// Q - Draws a quadratic Bézier curve from the current point to (x,y) using (x1,y1) as the control point. Q (uppercase) indicates that absolute coordinates will follow; q (lowercase) indicates that relative coordinates will follow. Multiple sets of coordinates may be specified to draw a polybézier. At the end of the command, the new current point becomes the final (x,y) coordinate pair used in the polybézier.

// Z - Close the current subpath by drawing a straight line from the current point to current subpath's initial point. Since the Z and z commands take no parameters, they have an identical effect.

