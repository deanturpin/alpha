#include <iostream>
#include <vector>
#include <ratio>

namespace tst
{
	using namespace std;

	void c11_ratio()
	{
		cout << "c++11 ratio" << endl;
		cout << "Nano is " << nano::num << " / " << nano::den << endl;
		cout << "Value of third is " << 1.0 * ratio<1,3>::num / ratio<1,3>::den << endl;
	}
}
