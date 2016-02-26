// Simple ASCII bitmap
// Just include this header - all methods are inline

#ifndef ASC_BITMAP_H
#define ASC_BITMAP_H

#include <iostream>
#include <vector>
#include <map>

namespace mega
{
	using namespace std;

	class pixl
	{
		public:

			// Constructor
			pixl() { ; }

			// Destructor
			~pixl() { ; }

			// Set a point
			void set(const int x, const int y)
			{
				// Check ranges
				x_range.first = min(x_range.first, x);
				x_range.second = max(x_range.second, x);

				y_range.first = min(y_range.first, y);
				y_range.second = max(y_range.second, y);

				points[y].push_back(x);
			}

			// Print some props
			void properties()
			{
				cout << "X " << x_range.first << ", " << x_range.second << endl;
				cout << "Y " << y_range.first << ", " << y_range.second << endl;
			}

			// Render the points
			void render()
			{
				// Extract Y range
				y_range.first = points.cbegin()->first;
				y_range.second = points.crbegin()->first;

				string bar(x_range.second + 1, ' ');

				for (auto i = y_range.first; i <= y_range.second; ++i)
				{
					// Initialise empty bar
					bar.assign(bar.size(), ' ');

					// Search for elements on current line
					const auto element = points.find(i);

					if (element != points.cend())
						for (auto &e:element->second)
							bar.at(e) = '*';

					cout << bar << endl;
				}
			}

		private:

			// Internal representation of the point space
			// Y followed by a series of Xs
			map<int, vector<int>> points;

			// Ranges
			pair<int, int> x_range;
			pair<int, int> y_range;
	};
}

#endif
