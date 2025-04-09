#include "Sort.h"

void Sort::SelectionSort(vector<int>& a) {
	for (int i = 0; i < a.size()-1; i++) {
		int index = i;
		for (int j = i + 1; j < a.size(); j++) {
			if (a[j] < a[index]) {
				index = j;
			}
		}
		swapItem(a[i], a[index]);
	}
}
void Sort::PubbleSort(vector<int>& a) {
	for (int i = a.size() - 1; i > 0 ; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				swapItem(a[j], a[j + 1]);
			}
		}
	}
}
void Sort::InsertionSort(vector<int>& a) {
	for (int i = 1; i < a.size(); i++) {
		int temp = a[i];
		int j = i - 1;
		while (j >=0 && a[j]>temp){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
		
	}
}

int Sort::QuickSortPatition(vector<int>& a, int l, int r) {
	int j = l-1;

	for (int i = l; i < r; i++) {
		if (a[i] < a[r]) {
			j++;
			swapItem(a[j], a[i]);
		}
	}
	swapItem(a[++j], a[r]);
	return j;
}
void Sort::QuickSortAlgorithm(vector<int>& a, int l, int r) {
	if (l < r) {
		int patition = QuickSortPatition(a, l, r);
		QuickSortAlgorithm(a, l, patition - 1);
		QuickSortAlgorithm(a, patition + 1, r);
	}
}
void Sort::QuickSort(vector<int>& a) {
	QuickSortAlgorithm(a, 0, a.size() - 1);
}

void Sort::MergeSortAlgorithm(vector<int>& a, int l, int r) {
	if (l < r) {
		int mid = l + (r - l) / 2;
		MergeSortAlgorithm(a, l, mid);
		MergeSortAlgorithm(a, mid + 1, r);
		vector<int>temp;
		int i = l;
		int j = mid + 1;
		while (i <= mid && j <= r) {
			if (a[i] < a[j]) {
				temp.push_back(a[i++]);
			}
			else {
				temp.push_back(a[j++]);
			}
		}
		int start, end;
		if (i <= mid) {
			start = i; end = mid;
		}
		else {
			start = j, end = r;
		}
		for (int z = start; z <= end; z++) {
			temp.push_back(a[z]);
		}
		for (int z = l; z <= r; z++) {
			a[z] = temp[z - l];
		}
	}
}
void Sort::MergeSort(vector<int>& a) {
	MergeSortAlgorithm(a, 0, a.size() - 1);
}


void Sort::HeapSortAlgorithm(vector<int>& a, int end) {
	for (int i = end; i >= 1; i--) {
		int index = (i - 1) / 2;
		if (a[index] < a[i]) {
			swapItem(a[i], a[index]);
		}
	}
	swapItem(a[0], a[end]);
	if (end > 1) {
		HeapSortAlgorithm(a, end - 1);
	}

}
void Sort::HeapSort(vector<int>& a) {
	Sort::HeapSortAlgorithm(a, a.size() - 1);
}


void Sort::ShellSortAlgorithm(vector<int>& a , int gap) {
	if (gap >= 1) {
		for (int i = 0+gap; i < a.size(); i++) {
			int j = i - gap;
			int temp = a[i];
			while (j>=0 && a[j]>temp) {
				a[j + gap] = a[j];
				j -= gap;
			}
			j += gap;
			a[j] = temp;
		}
		ShellSortAlgorithm(a, gap / 2);
	}
}
void Sort::ShellSort(vector<int>& a) {
	ShellSortAlgorithm(a, a.size() / 2);
}

void Sort::RadixSort(vector<int>& a) {
	bool stop = false;
	vector<vector<int>> containers;
	for (int i = 0; i < 10; i++) {
		vector<int> newcontainer;
		containers.push_back(newcontainer);
	}
	int lsd = 1;
	while (!stop) {
		stop = true;
		for (int i = 0; i < a.size(); i++) {
			int digit = a[i] / (int)pow(10, lsd - 1) % 10;
			if (digit > 0) { stop = false; }
			containers[digit].push_back(a[i]);
		}
		int pos = 0;
		for (int i = 0; i < containers.size(); i++) {
			for (int j = 0; j < containers[i].size(); j++) {
				a[pos++] = containers[i][j];
			}
			containers[i].clear();
		}
		lsd++;
	}
}