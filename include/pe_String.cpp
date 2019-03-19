#include "pe_String.hpp"

bool pe::PalindromeQ(unsigned int src)
{
	unsigned int tgt = src, tmp = 0;
	while (src) {
		tmp = tmp * 10 + src % 10;
		src /= 10;
	}
	return tmp == tgt;
}
