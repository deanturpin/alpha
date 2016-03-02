#include <iostream>
#include "unistd.h"
#include "pixl.h"

// Prototypes
void sine(std::vector<std::pair<int, int>> &);

int main()
{
	using namespace std;


	for (int i = 0; i < 5; ++i)
	{
		// Create a bitmap
		beta::pixl p;
		vector<pair<int, int>> coordinates;

		// Generate some points
		sine(coordinates);

		// Populate
		for (const auto &c:coordinates)
			p.set(c.first, c.second);

		// Clear screen and render
		p.clear_screen();
		cout << "Iteration " << i << endl;
		p.render();

		sleep(1);
	}

	return 0;
}
