#include "logic.h"

long long sum(int num) {
	long long sum = 0;

	for (int i = 3; i < num; i++) {

		if (i % 3 == 0 or i % 5 == 0) {
			sum += i;
		}
	}

	return sum;
}