#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <regex>

int main()
{
	using namespace std;

	// Read complete file on stdin
	stringstream raw;
	raw << cin.rdbuf();
	string host_file = raw.str();

	smatch match;
	regex expression("(\\d*\\.\\d*\\.\\d*)\\.\\d*\\s*(.*)");

	map<string, vector<string>>hosts;

	while (regex_search(host_file, match, expression))
	{
		hosts[match[1]].push_back(match[2]);

		// Move on to the rest of the file
		host_file = match.suffix().str();
	}

	for (auto host:hosts)
	{
		cout << host.first << ".0" << endl;
		for (auto name:host.second)
			cout << "\t" << name << endl;
	}

	return 0;
}
