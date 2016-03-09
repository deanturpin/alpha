#include <iostream>

namespace tst
{
	using namespace std;

	void mutable_keyword()
	{
		cout << "Mutable keywords" << endl;

		struct A
		{
			// Variable is increment despite being a const method
			void const_member_function() const { ++m; }
			mutable int m;
		};

		A a;
		a.const_member_function(); 
	}
}
