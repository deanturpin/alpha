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
				x_range.second = 100;
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
				_bitmap[y] = x;
			}

			// Render the bitmap
			void render()
			{
				// Extract Y range
				y_range.first = _bitmap.cbegin()->first;
				y_range.second = _bitmap.crbegin()->first;

				// X axis
				cout << string(x_range.second, '-') << x_range.second << endl;

				for (auto i = y_range.first; i <= y_range.second; ++i)
				{
					// Create a bar if an element exists
					string bar;	
					auto element = _bitmap.find(i);
					if (element != _bitmap.cend())
					{
						bar = string(element->second, ' ');
						bar += '*';
					}

					cout << "|" << bar << endl;
				}

				cout << y_range.second << endl;
			}

		private:

			// The internal bitmap
			map<int, int> _bitmap;

			// Ranges
			pair<int, int> x_range;
			pair<int, int> y_range;
	};
}

#endif
