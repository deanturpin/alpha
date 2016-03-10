#include <iostream>

namespace tst
{
	using namespace std;

	void literals()
	{
		cout << "Literals" << endl;
		cout << R"((?:[0-9]{1,3}\.?){4}\s+\S+)" << endl;
	}
}
