// O(N)
//int get_hidden_num(int* array, int size) {
//	int element = 0;
//
//	for (int i = 1; i < size; i++)
//	{
//		if (array[i] - array[i - 1] > 1) {
//
//			element = (array[i] + array[i - 1]) / 2;
//
//		}
//	}
//	return element;
//}

int get_hidden_num(int* array, int size) {
	int n = size + 1;
	int sum = (1 + n) * n / 2.0;

	int s = 0;
	for (int i = 0; i < size; i++)
	{
		s += array[i];
	}
	return sum - s;
}