#include <iostream>

int main()
{
	using namespace std;

	string codepoints("Unicode \u2764");

	cout << codepoints << endl;

	for (auto x:codepoints)
		cout << hex << (int) x << endl;

	return 0;
}
