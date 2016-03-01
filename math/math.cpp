#include <iostream>
#include "pixl.h"

// Prototypes
void one();
void two();

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

	one();
	two();

	return 0;
}
