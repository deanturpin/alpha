#include <iostream>
#include <vector>
#include <string>

namespace asc
{
	class bitmap
	{
		public:

			bitmap(const unsigned int width, const unsigned int height)
			{
				using namespace std;

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
			}
	};
}
