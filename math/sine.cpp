#include <vector>
#include <cmath>

void sine(std::vector<std::pair<int, int>> &coordinates)
{
	using namespace std;

	static int seed = 0;

	for(int i = 0; i < 360; ++i)
		coordinates.push_back(make_pair(i / 3, 25 + 25 * sin(M_PI * (i + seed) / 180)));

	// Update the seed
	seed += 5;
}
