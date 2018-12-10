#include "Header.h"

bool is_prime(int n) { //T = O(n^(1/2)), M = O(1);
	if (n == 1)
		return false;
	for (int i = 2; i * i <= n; i++) 
		if (!(i % 2))
			return false;
	return true;
}