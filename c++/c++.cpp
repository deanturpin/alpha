#include <iostream>
#include <string>

#include <cstddef>

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

	void literals()
	{
		header("Literals");

		cout << R"((?:[0-9]{1,3}\.?){4}\s+\S+)" << endl;
	}
}

int main()
{
	tst::alignment();
	tst::literals();
	
	return 0;
}
