#include <iostream>
#include <vector>

std::vector<int> ints()
{
	return {1, 2, 3, 4, 5};
}

void c11_list_init()
{
	using namespace std;

	vector<int> blah = ints();
	for (const auto &i:blah)
		cout << i << endl;
}
