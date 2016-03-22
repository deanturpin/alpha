#include <iostream>
#include <vector>

namespace tst
{
	void init()
	{
		using namespace std;

		vector<int> vec {1, 2, 3, 4, 5, 6, 7};
		cout << "Size " << vec.size() << endl;
	}
}
