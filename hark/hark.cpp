#include <string>
#include <vector>
#include <iostream>

int main()
{
	using namespace std;

	cout << "Hark" << endl;

	// Populate replies
	vector<string> replies;
	replies.push_back("Drink!");
	replies.push_back("Chair... curtains... floor...");
	replies.push_back("Gobshite!");
	replies.push_back("What? Priests? Don't tell me I'm still on that feckin' island!");

	cout << "Number of replies " << replies.size() << endl;

	while (1)
	{
		// Wait for a request
		string request;
		cin >> request;
		cout << request << endl;

		// Send a reply
		cout << replies.front();
	}

	return 0;
}
