#include <iostream>
#include "pixl.h"

int main()
{
	using namespace std;

	// Create a bitmap
	beta::pixl p;

	// Populate bitmap
	for (int i = 0; i < 140; ++i)
		for (auto j:{2, 10, 30, 50})
			p.set(i, j);

	// Render bitmap
	p.properties();
	p.render();

	return 0;
}
