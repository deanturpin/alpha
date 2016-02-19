#include <iostream>
#include <vector>
#include <string>

#include "bitmap.h"

namespace asc
{
	using namespace std;

	// Constructor
	bitmap::bitmap(const unsigned int w, const unsigned int h)
		: width(w)
		  , height(h)
		  , bm(h, vector<bool> (w, false))
	{
	}

	// Add a point to the bitmap
	void bitmap::set(const unsigned int x, const unsigned int y)
	{
		bm[x][y] = true;
	}

	// Render bitmap
	void bitmap::render()
	{
		// Top border
		const string horizontal(bm.front().size(), '-');
		cout << "+" << horizontal << "+" << endl;

		// Bitmap
		for (auto r:bm)
		{
			cout << "|";

			for (auto b:r)
				cout << (b ? 'O' : ' ');

			cout << "|" << endl;
		}

		// Bottom border
		cout << "+" << horizontal << "+" << endl;
	}
}
