#include "Header.h"

int fibonacci_number_recursive(int n) { //T = W(ô^n), M = O(n); ô = 1,6180339887 <- Golden ratio
	if (n == 0 || n == 1)
		return 1;
	return fibonacci_number_recursive(n - 1) + fibonacci_number_recursive(n - 2);
}

int fibonacci_number(int n) { // T = O(n), M = O(1);
	if (n == 0)
		return 1;
	int number = 1; //F(0)
	int next_number = 1; //F(1)
	int temp;
	for (int i = 2; i <= n; i++) {
		temp = next_number;
		next_number += number;
		number = temp;
	}
	return next_number;
}