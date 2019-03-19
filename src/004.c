#include "../include/pe_String.hpp"

unsigned int Problem004() {
	unsigned int  max = 0;
	for (unsigned int p = 999; p >= 100; --p) {
		for (unsigned int q = p; q >= 100; --q) {
			unsigned int tmp = p * q;
			if (tmp < max) break;
			if (pe::PalindromeQ(tmp)) max = tmp;
		}
	}
	return max;
}
