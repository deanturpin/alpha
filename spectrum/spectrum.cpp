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

	// Create bitmap
	pxl::pxl8 p;

	// Read samples
	const unsigned int batch = p.width() * 2;
	vector<short> samples(batch);

	while (cin.read(reinterpret_cast<char *>(samples.data()), batch * sizeof(short)))
	{
		// Store every other sample (two channels)
		int i = 0;
		for (auto s = samples.cbegin(); s != samples.cend(); s += 2)
			p.set(i++, (p.height() / 2) + *s / 120);

		// Render the buffer
		p.render();
	}

	return 0;
}
