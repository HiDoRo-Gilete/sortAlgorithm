#include "Helper.h"
void printArr(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swapItem(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}