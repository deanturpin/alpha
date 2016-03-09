#include <iostream>
#include <string>
#include <vector>

namespace tst
{
	using namespace std;

	void alignment()
	{
		cout << "Alignment" << endl;

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

	void literals()
	{
		cout << "Literals" << endl;
		cout << R"((?:[0-9]{1,3}\.?){4}\s+\S+)" << endl;
	}

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

	void init()
	{
		cout << "Initialisation" << endl;
		vector<int> vec {1, 2, 3, 4, 5, 6, 7};
		cout << "Size " << vec.size() << endl;
	}

	void loops();
	void lambda();
	void classes();
}


int main()
{
	tst::alignment();
	tst::literals();
	tst::classes();
	tst::mutable_keyword();
	tst::lambda();
	tst::init();
	tst::loops();
	
	return 0;
}
