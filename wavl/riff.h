#ifndef RIFF_RIFF_H
#define RIFF_RIFF_H

namespace riff
{
	using namespace std;

	struct chunk
	{
		unsigned int id;
		unsigned int size;
	};

	// Pulse-code modulation (PCM)
	// Frame – A frame is like a sample, but in multichannel format – it is a snapshot of all the channels at a specific data point.

	struct header
	{
		chunk riff;
		unsigned int wave_tag;
		chunk format;
		unsigned short format_tag;
		unsigned short channels;
		unsigned int sample_rate;
		unsigned int bytes_per_second;
		unsigned short block_align;
		chunk data;
	};
}

#endif
