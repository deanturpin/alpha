#include <iostream>
#include <vector>

namespace tst
{
	using namespace std;

	void loops()
	{
		cout << "Loops" << endl;
		vector<int> vec {1, 2, 3, 4, 5, 6, 7};

		for (const auto &v:vec)
			cout << "cont " << v << endl;

		for (const auto &i:{5, 4, 3, 2, 1})
			cout << "iter " << i << endl;
	}
}
