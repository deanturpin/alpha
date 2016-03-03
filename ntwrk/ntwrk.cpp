#include <iostream>
#include <sstream>
#include <vector>
// #include <map>
#include <regex>

int main()
{
	using namespace std;

	// Read complete file on stdin
	stringstream raw;
	raw << cin.rdbuf();
	string host_file = raw.str();

	vector<string> ips;

	// Extract all IPs
	smatch match;
	while (regex_search(host_file, match, regex("[0-9.]{7,}")))
	{
		ips.push_back(match[0]);
		host_file = match.suffix().str();
	}

	for (auto &ip:ips)
		cout << ip << endl;

	return 0;
}
