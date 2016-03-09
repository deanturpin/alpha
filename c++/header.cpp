#include <iostream>

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
}
