#include "Header.h"

double fast_pow(double a, int n) { //T = O(log n), M = O(1)
	double result = 1;
	double degree_a = a;
	while (n > 0) {
		if (n & 1 == 1) //если есть в разложении 0101 = a^2 + a^0 = a^5
			result *= degree_a;
		degree_a *= degree_a;
		n = n >> 1;
	}
	return result;
}