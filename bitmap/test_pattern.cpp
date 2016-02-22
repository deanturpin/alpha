#include <iostream>

#include "bitmap.h"

int main()
{
	using namespace std;

	// Create bitmap
	asc::bitmap b(150, 50);

	// Create test pattern
	for (unsigned int i = 0; i < b.width; ++i)
	{
		cout << i << ", " << i % b.height << endl;
		b.set(i, i % b.height);
	}

	// Render it to screen
	b.render();

	return 0;
}
