#include <iostream>
#include <sstream>
#include <regex>

#include "../bitmap/bitmap.h"

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
		const auto x_max = *max_element(X.cbegin(), X.cend());
		const auto y_max = *max_element(Y.cbegin(), Y.cend());

		// Create bitmap
		asc::bitmap b;

		// Populate
		for (auto j = X.cbegin(), k = Y.cbegin(); j != X.cend() && k != Y.cend(); ++j, ++k)
		{
			const unsigned int _x = floor(50 * *j / x_max);
			const unsigned int _y = floor(50 * *k / y_max);

			b.set(_x, _y);
		}

		b.render();
	}
	else
		cout << "No match" << endl;

	return 0;
}
