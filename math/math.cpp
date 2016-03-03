// #include <iostream>
#include <vector>
#include "pxl.h"

// Prototypes
void sine(std::vector<std::pair<int, int>> &);

int main()
{
	using namespace std;

	// Create a bitmap
	pxl::pxl8 p;

	for (int i = 0; i < 360; ++i)
	{
		vector<pair<int, int>> coordinates;

		// Generate some points
		sine(coordinates);

		// Populate
		for (const auto &c:coordinates)
			p.set(c.first, c.second);

		p.render();
		p.clear();
	}

	return 0;
}
