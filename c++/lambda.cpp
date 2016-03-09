#include <algorithm>
#include <iostream>
#include <vector>

namespace tst
{
	using namespace std;

	void lambda()
	{
		cout << "Lambda functions" << endl;

		vector<int> vec {1, 2, 3, 4, 5, 6, 7};

		for (const auto &v:vec)
			cout << v << endl;

		cout << "for_each increment" << endl;

		for_each(vec.begin(), vec.end(), [](int &n){ ++n; });

		for (const auto &v:vec)
			cout << v << endl;
	}
}
