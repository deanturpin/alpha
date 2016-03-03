#include <iostream>
#include <sstream>
#include <regex>

#include "pxl.h"

int main()
{
	using namespace std;

	// Read complete file on stdin
	stringstream file;
	file << cin.rdbuf();

	// Extract path tag
	auto f = file.str();
	smatch match;

	if (regex_search(f, match, regex("<path d=\"([^\"]*)\".*>")))
	{
		// Create bitmap
		pxl::pxl8 p;

		// Have path, extract the points
		string path = match[1];
		while (regex_search(path, match, regex("([A-Za-z])([\\d\\.]+)\\s+([\\d\\.]+)")))
		{
			stringstream xy;
			xy << match[2] << " " << match[3];

			double x, y;
			xy >> x;
			xy >> y;
			p.set(x / 4, y / 4);

			path = match.suffix();
		}

		p.render();
	}
	else
		cout << "No match" << endl;

	return 0;
}
