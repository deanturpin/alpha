#include <iostream>
#include <sstream>
#include <regex>

int main()
{
	using namespace std;

	// Read complete file on stdin
	stringstream file;
	file << cin.rdbuf();

	cout << "Size " << file.str().size() << endl;

	// Extract path tag
	auto f = file.str();
	smatch match;

	if (regex_search(f, match, regex("<path d=\"([^\"]*)\".*>")))
	{
		cout << match[1] << endl;

		// Have path, extract the points
	}
	else
		cout << "No match" << endl;

	return 0;
}
