#include <iostream>
#include <string>

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
		std::cout << std::alignment_of<A>::value << endl;
		std::cout << std::alignment_of<int>::value << endl;
		std::cout << std::alignment_of<double>::value << endl;
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
