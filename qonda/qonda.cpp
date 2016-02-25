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

	// Create bitmap
	mega::pixl p;
	p.scale(800, 400);

	// Populate
	for (int i = 0; i < 400 * 165; ++i)
		p.set(i, samples.at(i));

	// Print properties
	p.properties();

	// Render
	p.render();

	return 0;
}
