#include <iostream>
#include <vector>

namespace tst
{
	using namespace std;

	vector<int> ints()
	{
		return {1, 2, 3, 4, 5};
	}

	void list_init()
	{
		cout << "\nList initialisation" << endl;

		vector<int> blah = ints();
		for (const auto &i:blah)
			cout << i << endl;
	}
}
