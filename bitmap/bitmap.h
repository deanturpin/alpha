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
				_b[x].push_back(y);
			}

			// Render the bitmap
			void render()
			{
				/*
				cout << "^" << endl;
				for (const auto r:bm)
				{
					cout << "|";

					for (auto b:r)
						cout << (b ? '*' : ' ');

					cout << endl;
				}

				// X axis
				cout << "0" << string(width, '-') << ">" << endl;
				*/

				for (const auto x:_b)
					for (const auto y:x.second)
						cout << x.first << ", " << y << endl;
			}

		private:

			// The internal bitmap
			map<int, vector<int>> _b;
	};
}

#endif
