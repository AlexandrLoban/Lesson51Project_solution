#include "logic.h"
#include <iostream>
using namespace std;

int main() {
	int arrray[]{ 1, 2, 3, 5, 8, 7, 6, 9, 10 };

	int hidden_element = get_hidden_num(arrray, 9);

	cout << hidden_element << endl;


	return 0;
}