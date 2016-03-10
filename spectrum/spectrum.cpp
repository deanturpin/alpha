#include <algorithm>
#include <iostream>
#include <vector>
#include "riff.h"
#include "pxl.h"

#include <unistd.h>

int main()
{
	using namespace std;

	// Read header
	riff::header h;
	cin.read(reinterpret_cast<char *>(&h), sizeof h);

	// Create bitmap
	pxl::pxl8 p;

	// Read samples
	const unsigned int batch = p.width();
	vector<short> samples(batch);

	while (cin.read(reinterpret_cast<char *>(samples.data()), batch * sizeof(short)))
	{
		int i = 0;
		for (const auto &s:samples)
			p.set(i++, 30 + s / 1200);

		p.render();

		usleep(100000);
		p.clear();
	}

	sleep(2);

	return 0;
}
