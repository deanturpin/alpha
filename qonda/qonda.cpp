#include "riff.h"
#include <vector>

int main()
{
  using namespace std;

  // Read header
  struct riff::header h;

  cin.read(reinterpret_cast<char *>(&h), sizeof h);

  // Read a few seconds of samples
  const unsigned int samples_in_batch = h.sample_rate * 10;
  vector<short> samples(h.data.size > samples_in_batch ? samples_in_batch : h.data.size);

  while (cin.read(reinterpret_cast<char *>(&samples[0]), samples.size() * sizeof(short)));

  cout << "Batch length " << samples.size() / h.sample_rate << "s" << endl;

  return 0;

}
