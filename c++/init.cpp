#include <iostream>
#include <vector>

namespace tst
{
	using namespace std;

	void init()
	{
		cout << "Initialisation" << endl;

		vector<int> vec {1, 2, 3, 4, 5, 6, 7};
		cout << "Size " << vec.size() << endl;
	}
}
