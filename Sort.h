#pragma once

#include <vector>
#include <iostream>
#include "Helper.h"
#include<math.h>
using namespace std;



class Sort
{
private:
	static void HeapSortAlgorithm(vector<int>&, int);
	static int QuickSortPatition(vector<int>&, int l,int r);
	static void QuickSortAlgorithm(vector<int>&, int l, int r);
	static void MergeSortAlgorithm(vector<int>&, int l, int r);
	static void ShellSortAlgorithm(vector<int>&, int gap);
public:
	Sort() {

	};
	static void ShellSort(vector<int>&);
	static void SelectionSort(vector<int>&);
	static void PubbleSort(vector<int>&);
	static void InsertionSort(vector<int>&);
	static void QuickSort(vector<int>& );
	static void HeapSort(vector<int>&);
	static void MergeSort(vector<int>&);
	static void RadixSort(vector<int>&);
};

