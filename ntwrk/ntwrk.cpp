#include <iostream>
// #include <sstream>
// #include <vector>
#include <regex>

int main()
{
	using namespace std;

	#ifdef GETLINE_VERSION
	string line;
	while (getline(cin, line))
	{
		string prefix("norm\t");
		if (regex_search(line, regex("#")))
			prefix = "comm\t";
		else if (regex_search(line, regex("^$")))
			prefix = "empt\t";

		cout << prefix << line << endl;
	}
	#else
	// Read complete file on stdin
	stringstream raw;
	raw << cin.rdbuf();
	const string hosts = raw.str();

	regex word_regex("(\\S+)");
	const auto words_begin = sregex_iterator(hosts.cbegin(), hosts.cend(), word_regex);

	cout << "Found " << distance(words_begin, sregex_iterator()) << endl;
	#endif

	return 0;
}
