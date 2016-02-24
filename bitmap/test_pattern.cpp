#include <iostream>

#include "bitmap.h"

int main()
{
	using namespace std;

	// Create bitmap
	asc::bitmap b;

	// b.set(-1, 10);
	b.set(0, -5);
	b.set(1, -4);
	b.set(2, -3);
	b.set(3, -2);
	b.set(4, -1);
	b.set(5, -0);
	b.set(20, 20);
	b.set(20, 21);
	b.set(20, 22);
	b.set(21, 22);
	b.set(22, 22);
	b.set(23, 22);
	b.set(24, 22);
	b.set(25, 22);

	// Render it to screen
	b.render();

	return 0;
}
