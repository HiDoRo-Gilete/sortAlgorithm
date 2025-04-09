
#include <iostream>
#include "Sort.h"
#include <vector>
#include "Helper.h"
using namespace std;
vector<int> coppyArray(vector<int> a) {
	vector<int>b = a;
	return b;
}
int main()
{
	vector<int> a = { 12,35,1,2,63,123,54,123,65,54,21,32154};
	cout << "Selection Sort: \n";
	Sort::SelectionSort(a);
	printArr(a);

	a = { 12,35,1,2,63,123,54,123,65,54,21,32154 };
	Sort::PubbleSort(a);
	cout << "Pubble Sort: \n";
	printArr(a);

	a = { 12,35,1,2,63,123,54,123,65,54,21,32154 };
	Sort::InsertionSort(a);
	cout << "Insertion Sort: \n";
	printArr(a);

	a = { 12,35,1,2,63,123,54,123,65,54,21,32154 };
	Sort::QuickSort(a);
	cout << "Quick Sort: \n";
	printArr(a);

	a = { 12,35,1,2,63,123,54,123,65,54,21,32154 };
	Sort::MergeSort(a);
	cout << "Merge Sort: \n";
	printArr(a);

	a = { 12,35,1,2,63,123,54,123,65,54,21,32154 };
	Sort::HeapSort(a);
	cout << "Heap Sort: \n";
	printArr(a);

	a = { 12,35,1,2,63,123,54,123,65,54,21,32154 };
	Sort::ShellSort(a);
	cout << "Shell Sort: \n";
	printArr(a);

	a = { 12,35,1,2,63,123,54,123,65,54,21,32154 };
	Sort::RadixSort(a);
	cout << "Radix Sort: \n";
	printArr(a);
}
