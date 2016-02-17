#include <iostream>
#include <sstream>
#include <vector>
#include <regex>

int main()
{
	using namespace std;

	// Get the whole file
	stringstream raw;
	raw << cin.rdbuf();
	string gpx = raw.str();

	// Match all numbers with a decimal point
	smatch match;
	regex expression("<ele>(.*)</ele>");

	vector<double> points;

	while (regex_search(gpx, match, expression))
	{
		stringstream elevation;
		elevation << match[1];

		double e;
		elevation >> e;

		points.push_back(e);

		// Move on to the remainder
		gpx = match.suffix().str();
	}

	// File stats
	cout << "Points " << points.size() << endl;

	auto minmax = minmax_element(points.cbegin(), points.cend());
	cout << "Max " << *minmax.first << endl;
	cout << "Min " << *minmax.second << endl;

	for (auto x:points)
	{
		cout << string(x - *minmax.first, ' ') << "| " << x << endl;
		stringstream command;
		double latitude = 51;
		double longitude = 0;
		string key = "xxxxxxx";
		command << "https://api.what3words.com/position?key=" << key << "&position=" << latitude << "," << longitude << "&lang=en";

		// cout << command.str() << endl;
		// system(command.str().c_str());
	}

	return 0;
}
