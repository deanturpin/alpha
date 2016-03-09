#include <iostream>
#include <vector>

namespace tst
{
	// Namespace and prototypes
	using namespace std;
	void header(const string &name);

	void loops()
	{
		// header("Loops");
		vector<int> vec {1, 2, 3, 4, 5, 6, 7};

		for (const auto &v:vec)
			cout << v << endl;

		for (const auto &i:{5, 4, 3, 2, 1})
			cout << i << endl;
	}
}
