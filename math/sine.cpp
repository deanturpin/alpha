#include <vector>
#include <cmath>

void sine(std::vector<std::pair<int, int>> &coordinates)
{
	using namespace std;

	for(int i = 0; i < 360; ++i)
	{
		pair<int, int> c;
		c.first = i / 3;
		c.second = 25 * sin(2 * M_PI * i / 360);

		coordinates.push_back(c);
	}
}
