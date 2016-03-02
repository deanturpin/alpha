#include <iostream>
#include "pxl9.h"

// Prototypes
void sine(std::vector<std::pair<int, int>> &);

int main()
{
	using namespace std;

	for (int i = 0; i < 360; ++i)
	{
		// Create a bitmap
		pxl::pxl9 p;
		vector<pair<int, int>> coordinates;

		// Generate some points
		sine(coordinates);

		// Populate
		for (const auto &c:coordinates)
			p.set(c.first, c.second);

		// Clear screen and render
		p.top();
		p.render();
	}

	return 0;
}
