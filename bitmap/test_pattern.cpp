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

	// b.set(-1, 10);
	b.set(0, 0);
	b.set(1, 2);
	b.set(2, 4);
	b.set(3, 6);
	b.set(4, 8);

	// Render it to screen
	b.render();

	return 0;
}
