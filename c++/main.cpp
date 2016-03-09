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

	void mutable_keyword();
	void loops();
	void lambda();
	void classes();
	void init();
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
	tst::init();
	
	return 0;
}
