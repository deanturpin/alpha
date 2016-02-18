#include <iostream>
#include <vector>
#include <bitset>
#include <string>

int main()
{
	using namespace std;

	const int width = 100;
	const int height = 40;

	// Create bitmap
	/*
	bitset<width> line = 0b0101'0101'0101'0101;
	vector<bitset<width>> bitmap;
	for (auto i = 0; i < height; ++i)
		bitmap.push_back(line);

	// Print bitmap
	for (const auto l:bitmap)
		cout << l << endl;
	*/

	// Create bitmap
	vector<bool> raster(width, false);

	vector<vector<bool>> bitmap;
	for (auto i = 0; i < height; ++i)
		bitmap.push_back(raster);

	// Top border
	// wcout << "/" << wstring(width, L"\u2500") << "\\" << endl;
	wstring horizontal;
	for (auto i = 0; i < width; ++i)
		horizontal += L"\u2500";

	wcout << "+" << horizontal << "+" << endl;

	// Bitmap
	for (auto r:bitmap)
	{
		wcout << L"\u2502";

		for (auto b:r)
			wcout << (b ? 'O' : ' ');

		wcout << "|" << endl;
	}

	// Bottom border
	wcout << "+" << horizontal << "+" << endl;

	return 0;
}
