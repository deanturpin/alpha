#include <iostream>
#include <sstream>
#include <map>

int main()
{
	using namespace std;

	// Read complete file on stdin
	stringstream file;
	file << cin.rdbuf();

	cout << "File is " << file.str().size() << endl;

	map<char, int> histogram;

	for (auto c:file.str())
		++histogram[c];

	cout << "Histogram size " << histogram.size() << endl;

	for (auto h:histogram)
		cout << h.first << "\t" << h.second << endl;

	return 0;
}
