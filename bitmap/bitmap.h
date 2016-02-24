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
			{
				// Set default ranges
				x_range.first = 0;
				x_range.second = 150;

				y_range.first = 0;
				y_range.second = 50;
			}
			
			// Destructor
			~bitmap() { ; }

			// Set a point in the bitmap
			void set(const int x, const int y)
			{
				// Check X range
				x_range.first = min(x_range.first, x);
				x_range.second = max(x_range.second, x);

				cout << "set " << x << ", " << y << endl;

				// Write to bitmap
				_bitmap[y].push_back(x);
			}

			// Render the bitmap
			void render()
			{
				// Extract Y range
				y_range.first = _bitmap.cbegin()->first;
				y_range.second = _bitmap.crbegin()->first;

				cout << "X " << x_range.first << ", " << x_range.second << endl;
				cout << "Y " << y_range.first << ", " << y_range.second << endl;

				cout << y_range.first << endl;

				for (auto i = y_range.first; i <= y_range.second; ++i)
				{
					// Create a bar if an element exists
					string bar(x_range.second, ' ');	
					const auto element = _bitmap.find(i);

					if (element != _bitmap.cend())
						for (auto &e:element->second)
							bar.at(e) = '*';

					cout << (i == 0 ? "0" : "|") << bar << endl;
				}

				cout << y_range.second << endl;
			}

		private:

			// The internal bitmap
			map<int, vector<int>> _bitmap;

			// Ranges
			pair<int, int> x_range;
			pair<int, int> y_range;
	};
}

#endif
