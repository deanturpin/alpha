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

	cout << "WAV time " << samples.size() / h.sample_rate << "s" << endl;
	cout << "Samples " << samples.size() << endl;

	// Create bitmap
	asc::bitmap b(50, 50);

	// const int target_samples = b.width;

	const unsigned int target = b.width;
	const unsigned int batch = total / target;

	cout << "Target samples " << total << endl;
	cout << "Samples per bin " << batch << endl;

	for (auto i = samples.cbegin(); i < samples.cend(); i += batch)
		cout << (accumulate(i, i + batch, 0) / batch) << endl;

	// for (unsigned int i = 0; i < b.width; ++i)
		// b.set(i, abs(resamples.at(i)));

	// b.render();

	return 0;
}
