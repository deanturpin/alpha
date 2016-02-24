#include <iostream>

#include "bitmap.h"

int main()
{
	using namespace std;

	// Create bitmap
	asc::bitmap b;

	// b.set(-1, 10);
	b.set(0, 0);
	b.set(1, 2);
	b.set(2, 4);
	b.set(3, 6);
	b.set(4, 8);
	b.set(50, 48);

	// Render it to screen
	b.render();

	return 0;
}
