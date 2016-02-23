#include <iostream>

#include "bitmap.h"

int main()
{
	using namespace std;

	// Create bitmap
	asc::bitmap b;

	// Create test pattern
	// for (unsigned int i = 0; i < b.width; ++i)
		// b.set(i, i % b.height);

	b.set(0, 0);
	b.set(-10, 11);
	b.set(-10, 22);
	b.set(-10, -13);
	b.set(-13, -4);

	// Render it to screen
	b.render();

	return 0;
}
