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
	vector<vector<bool>> bitmap(height, vector<bool> (width, false));

	// Top border
	const string horizontal(width + 2, '-');
	cout << horizontal << endl;

	// Bitmap
	for (auto r:bitmap)
	{
		cout << "|";

		for (auto b:r)
			cout << (b ? 'O' : ' ');

		cout << "|" << endl;
	}

	// Bottom border
	cout << horizontal << endl;

	return 0;
}
