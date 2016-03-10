#include <iostream>
#include <string>

namespace tst
{
	using namespace std;

	void mutable_keyword();
	void loops();
	void lambda();
	void classes();
	void init();
	void list_init();
	void align();
	void literals();
}


int main()
{
	using namespace tst;

	align();
	tst::literals();
	classes();
	mutable_keyword();
	lambda();
	init();
	loops();
	init();
	list_init();
	tst::literals();
	
	return 0;
}
