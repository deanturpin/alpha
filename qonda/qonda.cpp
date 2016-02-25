#include <vector>
#include <algorithm>
#include "riff.h"
#include "../bitmap/bitmap.h"

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
	asc::bitmap b;
	b.scale(400, 400);

	// Populate
	for (int i = 0; i < 400 * 165; ++i)
		b.set(i, samples.at(i));

	b.properties();

	// Render
	b.render();

	return 0;
}
