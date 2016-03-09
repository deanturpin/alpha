#include <iostream>
#include <string>
#include <vector>

namespace tst
{
	// Namespace and prototypes
	using namespace std;
	void header(const string &name);

	void alignment()
	{
		header("Alignment");

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

	void classes_and_structs()
	{
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
	}

	void literals()
	{
		header("Literals");

		cout << R"((?:[0-9]{1,3}\.?){4}\s+\S+)" << endl;
	}

	void mutable_keyword()
	{
		header("Mutable keywords");

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
		header("Initialisation");
		vector<int> vec {1, 2, 3, 4, 5, 6, 7};
		cout << "Size " << vec.size() << endl;
	}

	void loops();
	void lambda();
}


int main()
{
	tst::alignment();
	tst::literals();
	tst::classes_and_structs();
	tst::mutable_keyword();
	tst::lambda();
	tst::init();
	tst::loops();
	
	return 0;
}
