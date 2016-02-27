#include <vector>
#include <algorithm>
#include "riff.h"
#include "pixl.h"

int main()
{
	using namespace std;

	// Read header
	struct riff::header h;
	cin.read(reinterpret_cast<char *>(&h), sizeof h);

	// Read samples
	const unsigned int total = h.data.size;
	vector<short> samples(total);
	cin.read(reinterpret_cast<char *>(samples.data()), samples.size() * sizeof(short));

	cout << "Samples " << samples.size() << endl;

	// Create bitmap
	mega::pixl p;

	// Target dimensions
	const int x = 150;
	// const int y = 50;

	const int x_bin_size = samples.size() / x;
	const int y_bin_size = 1200;

	// cout << "x bin size " << x_bin_size << endl;

	// Populate
	for (const auto &s:samples)
	{
		static int i = 0;
		p.set(i++ / x_bin_size, s / y_bin_size);
	}

	// Print properties
	p.properties();
	// p.dump();

	// Render
	p.render();

	return 0;
}
