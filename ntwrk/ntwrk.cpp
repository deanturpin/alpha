#include <iostream>
#include <sstream>
#include <vector>
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

	// Ping each IP
	for (auto &ip:ips)
	{
		cout << ip << endl;
		system(string("ping -w 1 " + ip).c_str());
	}

	return 0;
}
