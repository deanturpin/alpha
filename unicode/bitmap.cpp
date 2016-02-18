#include <iostream>
#include <vector>
#include <bitset>

int main()
{
	using namespace std;

	const int width = 100;
	const int height = 40;

	// Create bitmap
	bitset<width> line = 0b0101'0101'0101'0101;
	vector<bitset<width>> bitmap;
	for (auto i = 0; i < height; ++i)
		bitmap.push_back(line);

	// Print bitmap
	for (const auto l:bitmap)
		cout << l << endl;

	return 0;
}
