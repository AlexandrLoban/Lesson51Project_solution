#include "logic.h"

long long basic_sum(int number, int divider) {
	int n = (number -1) / divider;

	return divider * ((1 + n) * (n / 2.0));
}


long long sum(int num) {
	long long sum = basic_sum(num, 3) + basic_sum(num, 5)
		- basic_sum(num, 15);

	return sum;
}