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

				_b[y] = x;
			}

			// Render the bitmap
			void render()
			{
				const int start = _b.cbegin()->first;
				const int end = _b.crbegin()->first;

				// X axis
				cout << string(50, '-') << endl;

				/*
				// Bitmap
				for (auto i = start; i < end; ++i)
				{
					cout << "|";

					auto it = _b.find(i);
					if (it != _b.end())
						cout << string(it->second, ' ') << "*";

					cout << endl;
				}
				*/

				// Y axix
				// cout << "-" << endl;

				for (const auto &p:_b)
					cout << p.first << "\t|" << string(p.second, ' ') << "*" << endl;
			}

		private:

			// The internal bitmap
			map<int, int> _b;

			// Ranges
			// int ymin;
			// int ymax;
	};
}

#endif
