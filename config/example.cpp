#include <iostream>
#include <sstream>

int main()
{
	using namespace std;

	// Read complete file on stdin
	stringstream file;
	file << cin.rdbuf();

	cout << "Size " << file.str().size() << endl;

	return 0;
}
