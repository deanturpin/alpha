// Simple ASCII bitmap
// Just include this header - all methods are inline

#ifndef ASC_BITMAP_H
#define ASC_BITMAP_H

#include <iostream>
#include <vector>
#include <map>

namespace asc
{
	using namespace std;

	class bitmap
	{
		public:

			// Constructor
			bitmap()
				: x_scale(1)
				, y_scale(1)
					{ ; }

			// Destructor
			~bitmap() { ; }

			// Set a point in the bitmap
			void set(const int x, const int y)
			{
				// Scale parameters
				const int _x = x / x_scale;
				const int _y = y / y_scale;

				// Check ranges
				x_range.first = min(x_range.first, _x);
				x_range.second = max(x_range.second, _x);

				y_range.first = min(y_range.first, _y);
				y_range.second = max(y_range.second, _y);

				// Write to bitmap
				_bitmap[_y].push_back(_x);
			}

			// Print some props
			void properties()
			{
				cout << "X " << x_range.first << ", " << x_range.second << endl;
				cout << "Y " << y_range.first << ", " << y_range.second << endl;
			}

			void scale(const int x, const int y)
			{
				x_scale = x;
				y_scale = y;
			}

			// Render the bitmap
			void render()
			{
				// Extract Y range
				y_range.first = _bitmap.cbegin()->first;
				y_range.second = _bitmap.crbegin()->first;

				// cout << y_range.first << endl;

				const auto y_max = max(y_range.first, y_range.second);

				string bar(x_range.second + 1, ' ');

				for (auto i = -y_max; i <= y_max; ++i)
				{
					// Create an empty bar or an axis
					bar.assign(bar.size(), (i == 0 ? '-' : ' '));

					// Search for elements on current line
					const auto element = _bitmap.find(i);

					if (element != _bitmap.cend())
						for (auto &e:element->second)
							bar.at(e) = '*';

					cout << "|" << bar << endl;
				}

				cout << y_range.second << endl;
			}

		private:

			// The internal bitmap
			map<int, vector<int>> _bitmap;

			// Ranges
			pair<int, int> x_range;
			pair<int, int> y_range;

			// Scaling
			int x_scale;
			int y_scale;
	};
}

#endif
