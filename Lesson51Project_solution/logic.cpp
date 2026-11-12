#include "logic.h"

// O(1)
bool is_perfect_number(long long number) {
	const long long PERFECT_NUMS[]{ 6, 28, 496, 8'128,
		33'550'336, 8'589'869'056, 137'438'691'328,
		2'305'843'008'139'952'128 };

	int first = 0;
	int last = 7;

	while (first <= last) {
		int mid = (first + last) / 2;
		if (PERFECT_NUMS[mid] == number) {
			return true;
		}
		else if (PERFECT_NUMS[mid] > number) {
			last = mid - 1;
		}
		else {
			first = mid + 1;
		}
	}

	return false;
}