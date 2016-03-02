#ifndef RIFF_RIFF_H
#define RIFF_RIFF_H

#include <ostream>

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

	// Overload << for a chunk
	ostream& operator<<(ostream &out, const struct chunk &c)
	{
		out << c.id << endl;
		out << c.size;
		return out;
	}

	// Overload << for the header
	ostream& operator<<(ostream &out, const struct header &h)
	{
		out << h.riff << endl;
		out << h.wave_tag << endl;
		out << h.format << endl;
		out << h.format_tag << endl;
		out << h.channels << endl;
		out << h.sample_rate << endl;
		out << h.bytes_per_second << endl;
		out << h.block_align << endl;
		out << h.data;
		return out;
	}
}

#endif
