#include <iostream>
#include <string>

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

	void mutable_keyword();
	void loops();
	void lambda();
	void classes();
	void init();
	void list_init();
}


int main()
{
	using namespace tst;

	alignment();
	tst::literals(); // rename
	classes();
	mutable_keyword();
	lambda();
	init();
	loops();
	init();
	list_init();
	
	return 0;
}
