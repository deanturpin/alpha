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
					// Create an empty bar or an axis
					bar.assign(bar.size(), (i == 0 ? '-' : ' '));

					// Search for elements on current line
					const auto element = points.find(i);

					if (element != points.cend())
						for (auto &e:element->second)
							bar.at(e) = '*';

					cout << "|" << bar << endl;
				}
			}

			/*
			void dump()
			{
				for (const auto &line:points)
					for (auto point:line.second)
						cout << line.first << ", " << point << endl;

				cout << "Size " << points.size() << endl;
			}
			 */

			// Resize the point space
			/*
			void resize(const unsigned int x, const unsigned int y)
			{
				// Resize by running through the original map again
				map<int, vector<int>> b;

				const auto x_bins = x_range.second / x;
				const auto y_bins = (y_range.second - y_range.first) / y;

				for (const auto &line:points)
				{
					const int y_new = line.first;

					for (auto point:line.second)
					{
						// const int x_new = line.first / x_bins;
						// const int y_new = point / y_bins;

						const int x_new = point;

						// Check ranges
						x_range.first = 0;
						x_range.second = 0;
						x_range.first = min(x_range.first, x_new);
						x_range.second = max(x_range.second, x_new);

						y_range.first = 0;
						y_range.second = 0;
						y_range.first = min(y_range.first, y_new);
						y_range.second = max(y_range.second, y_new);

						b[y_new].push_back(x_new);
					}
				}

				points.clear();
				points = b;

						// cout << line.first << ", " << point << endl;

				// cout << "X " << x_range.first << ", " << x_range.second << endl;
				// cout << "Y " << y_range.first << ", " << y_range.second << endl;

				// cout << "Resampled map size " << b.size() << endl;
			}
			*/

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
