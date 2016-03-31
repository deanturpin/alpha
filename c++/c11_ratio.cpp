#include <iostream>
#include <ratio>

namespace tst
{
	void c11_ratio()
	{
		using namespace std;

		cout << "Nano is " << nano::num << " / " << nano::den << endl;
		cout << "Value of third is " << 1.0 * ratio<1,3>::num / ratio<1,3>::den << endl;
		// cout << "Ratio add " << 1.0 * ratio_add(ratio<1,3>, ratio<1,3>)::den << endl;
	}
}
