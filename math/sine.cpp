#include <vector>
#include <cmath>

void sine(std::vector<std::pair<int, int>> &coordinates)
{
	using namespace std;

	static int seed = 0;

	for(int i = 0; i < 360; ++i)
	{
		pair<int, int> c;
		c.first = i / 3;
		c.second = 25 * sin(M_PI * (i + seed) / 180);

		coordinates.push_back(c);
	}

	// Update the seed
	seed += 5;
}
