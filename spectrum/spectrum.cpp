#include <algorithm>
#include <iostream>
#include <vector>
#include "riff.h"
#include "pxl.h"

int main()
{
	using namespace std;

	// Read header
	riff::header h;
	cin.read(reinterpret_cast<char *>(&h), sizeof h);

	// Read samples
	const unsigned int total = h.data.size;
	vector<short> samples(total);
	cin.read(reinterpret_cast<char *>(samples.data()), samples.size() * sizeof(short));

	// Create bitmap
	pxl::pxl8 p;

	for (const auto &s:samples)
	{
		static int i = 0;
		p.set(i++ % p.width(), 30 + s / 1200);

		if (!(i % p.width()))
			p.render();
	}

	return 0;
}
