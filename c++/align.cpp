#include <iostream>

namespace tst
{
	using namespace std;

	void align()
	{
		cout << "Align" << endl;

		class A {};
		class alignas(32) B {};

		cout << alignment_of<A>::value << endl;
		cout << alignment_of<B>::value << endl;
		cout << alignment_of<int>::value << endl;
		cout << alignment_of<double>::value << endl;
		cout << alignof(A) << endl;
		cout << alignof(B) << endl;
		cout << alignof(int) << endl;
		cout << alignof(double) << endl;
	}
}
