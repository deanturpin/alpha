#include <iostream>
#include <iomanip>
#include <sstream>

namespace tst
{
	void io_manipulation()
	{
		using namespace std;

		stringstream s;
		string blah(to_string(1234));
		s << quoted(string(blah));

		cout << "Quite a lot of code quote something like this: " << s.str() << "?" << endl;
	}
}
