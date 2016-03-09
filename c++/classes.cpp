#include <iostream>

namespace tst
{
	using namespace std;

	void classes()
	{
		cout << "Classes" << endl;

		// Explicit
		struct A
		{
			A(int) { }
		};

		struct B
		{
			explicit B(int) { }
		};

		A(1);
		B(1);

		// Final

	}
}
