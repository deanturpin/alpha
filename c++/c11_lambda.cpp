#include <algorithm>
#include <iostream>
#include <vector>

namespace tst
{
	// Lambda - anonymous functions
	void c11_lambda()
	{
		using namespace std;

		vector<int> vec {1, 2, 3};

		// Before
		for (const auto &v:vec)
			cout << v << endl;

		cout << "for_each increment" << endl;

		// Increment each element
		for_each(vec.begin(), vec.end(), [](int &n){ ++n; });

		// After
		for (const auto &v:vec)
			cout << v << endl;

		auto square_and_print = [](int n) {cout << n * n << endl;};

		square_and_print(5);
	}
}
