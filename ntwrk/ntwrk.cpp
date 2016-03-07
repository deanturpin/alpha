#include <iostream>
// #include <sstream>
// #include <vector>
#include <regex>

int main()
{
	using namespace std;

	// Read complete file on stdin
	stringstream raw;
	raw << cin.rdbuf();
	const string hosts = raw.str();

	regex word_regex("\\S+");
	const auto words_begin = sregex_iterator(hosts.cbegin(), hosts.cend(), word_regex);

	cout << "Found " << distance(words_begin, sregex_iterator()) << endl;

	for (std::sregex_iterator i = words_begin; i != sregex_iterator(); ++i)
		cout << i->str() << endl;

	return 0;
}
