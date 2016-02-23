// Simple ASCII bitmap
// Just include this header - all methods are inline
// 
// Example:
//		asc::bitmap b(100, 50);
//		b.set(10, 10);
//		b.render();

#ifndef ASC_BITMAP_H
#define ASC_BITMAP_H

#include <iostream>
#include <vector>

namespace asc
{
	using namespace std;

	class bitmap
	{
		public:

			// Constructor
			bitmap(const unsigned int w, const unsigned int h)
				: width(w)
				, height(h)
				, bm(h, vector<bool>(w, false))
			{
			}

			// Destructor
			~bitmap()
			{
			}

			// Set a point in the bitmap
			void set(const unsigned int x, const unsigned int y)
			{
				bm[min(y, height - 1)][min(x, width - 1)] = true;
			}

			// Render the bitmap
			void render()
			{
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
			}

			// Properties
			const unsigned int width;
			const unsigned int height;

		private:

			// The internal bitmap
			vector<vector<bool>> bm;

			// Default constructor not allowed
			bitmap();
	};
}

#endif
