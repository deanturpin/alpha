#include <iostream>
#include "pixl.h"

// Prototypes
void sine(std::vector<std::pair<int, int>> &);
// void two(std::vector<std::pair<int, int>>);
void two();

int main()
{
	using namespace std;

	// Create a bitmap
	beta::pixl p;

	// Generate some points
	vector<pair<int, int>> coordinates;
	sine(coordinates);

	// Populate
	for (const auto &c:coordinates)
		p.set(c.first, c.second);

	// Render
	p.clear();
	p.render();

	// two();

	return 0;
}
