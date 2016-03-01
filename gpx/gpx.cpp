#include <iostream>
#include <sstream>
#include <vector>
#include <regex>

#include "pixl.h"

int main()
{
	using namespace std;

	// Get the whole file
	stringstream raw;
	raw << cin.rdbuf();
	string gpx = raw.str();

	// Create a bitmap
	beta::pixl p;
	smatch match;

	while (regex_search(gpx, match, regex("lat=\".....(...).+\" lon=\"....(...).+\"")))
	{
		stringstream latlon;
		latlon << match[1] << " " << match[2];

		int lat, lon;
		latlon >> lat;
		latlon >> lon;

		p.set(lon / 10, lat / 20);

		// Move on to the remainder
		gpx = match.suffix().str();
	}

	p.properties();
	p.render();

	return 0;
}
