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

			// Constructor/destructor
			bitmap() { ; }
			~bitmap() { ; }

			// Set a point in the bitmap
			void set(const int x, const int y)
			{
				// TBD - check y range for later

				cout << "set " << x << ", " << y << endl;

				_bitmap[y] = x;
			}

			// Render the bitmap
			void render()
			{
				// X axis
				cout << string(50, '-') << endl;

				/*
				// Bitmap
				for (auto i = start; i < end; ++i)
				{
					cout << "|";

					auto it = _bitmap.find(i);
					if (it != _bitmap.end())
						cout << string(it->second, ' ') << "*";

					cout << endl;
				}
				*/

				// Y axix
				// cout << "-" << endl;

				// for (const auto &p:_bitmap)
					// cout << p.first << "\t|" << string(p.second, ' ') << "*" << endl;
				
				// const int start = _bitmap.cbegin()->first;
				// const int end = _bitmap.crbegin()->first;

				for (auto i = _bitmap.cbegin()->first; i <= _bitmap.crbegin()->first; ++i)
				{
					// Create a bar if an element exists
					string bar;	
					auto element = _bitmap.find(i);
					if (element != _bitmap.cend())
					{
						bar = string(element->second, ' ');
						bar += '*';
					}

					cout << i << "\t|" << bar << endl;
				}
			}

		private:

			// The internal bitmap
			map<int, int> _bitmap;

			// Ranges
			// int ymin;
			// int ymax;
	};
}

#endif
