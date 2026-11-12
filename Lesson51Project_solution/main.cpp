#include <iostream>
using namespace std;
#include "logic.h"

int main() {
	long long num;

	cout << "Input your num: ";
	cin >> num;

	bool result = is_perfect_number(num);
	string msg = result ? "Yes, its perfect num." : "No ";
	cout << msg << endl;

	return 0;
}