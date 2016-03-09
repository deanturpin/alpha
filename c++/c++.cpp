#include <iostream>
#include <string>

// TODO
// explicit operators - http://en.cppreference.com/w/cpp/language/explicit

namespace tst
{
	using namespace std;

	// Pretty print a header for each test
	void header(const string &name)
	{
		static unsigned int id = 0;

		// Print test header and increment ID
		const string border(20, '-');
		cout << border << endl << id++ << ". " << name << endl << border << endl;
	}

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

	void lambda_functions()
	{
		header("Lambda functions");
	}
}

int main()
{
	tst::alignment();
	tst::literals();
	tst::classes_and_structs();
	tst::mutable_keyword();
	tst::lambda_functions();
	
	return 0;
}
