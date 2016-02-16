#include <iostream>
#include <string>

int main()
{
	using namespace std;

	// Normal string
	{
		cout << "Normal strings \"\u2764\"" << endl;

		string codepoint("\u2764");
		cout << "cout \"" << codepoint << "\"" << endl;

		for (auto x:codepoint)
			cout << hex << static_cast<int>(x) << endl;
	}

	// Wide string
	{
		cout << "\nWide strings \"\u2764\"" << endl;

		wstring codepoint(L"\u2765");
		wcout << "wcout \"" << codepoint << "\"" << endl;

		for (auto x:codepoint)
			cout << hex << static_cast<int>(x) << endl;
	}

	return 0;
}
