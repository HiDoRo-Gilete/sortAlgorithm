
#include <iostream>
#include "Sort.h"
#include <vector>
#include <random>
#include "Helper.h"
using namespace std;
vector<int> coppyArray(vector<int> a) {
	vector<int>b = a;
	return b;
}
vector<int> generateRandomVector(int n) {
	std::vector<int> vec;

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, 100); 
	for (int i = 0; i < n; ++i) {
		vec.push_back(dis(gen));
	}

	return vec;
}
int main()
{
	vector<int> a = generateRandomVector(50);
	cout << "Selection Sort: \n";
	Sort::SelectionSort(a);
	printArr(a);

	a = generateRandomVector(50);

	Sort::PubbleSort(a);
	cout << "Pubble Sort: \n";
	printArr(a);

	a = generateRandomVector(50);
	Sort::InsertionSort(a);
	cout << "Insertion Sort: \n";
	printArr(a);

	a = generateRandomVector(50);
	Sort::QuickSort(a);
	cout << "Quick Sort: \n";
	printArr(a);

	a = generateRandomVector(50);
	Sort::MergeSort(a);
	cout << "Merge Sort: \n";
	printArr(a);

	a = generateRandomVector(50);
	Sort::HeapSort(a);
	cout << "Heap Sort: \n";
	printArr(a);

	a = generateRandomVector(50);
	Sort::ShellSort(a);
	cout << "Shell Sort: \n";
	printArr(a);

	a = generateRandomVector(50);
	Sort::RadixSort(a);
	cout << "Radix Sort: \n";
	printArr(a);
}
