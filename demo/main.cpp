#include <iostream>
#include <algorithm>
#include "Bubble_Sort.h"
#include "Selection_Sort.h"
#include "Insertion_Sort.h"
#include "Shell_Sort.h"
#include "Merge_Sort.h"
#include "Quick_Sort.h"
#include "Heap_Sort.h"
#include "Counting_Sort.h"
#include "Radix_Sort.h"
#include "Bucket_Sort.h"
#include "Binary_Insertion_Sort.h"
using namespace std;
int main() {
	const int n = 10;
	int arr1[n] = { 64, 34, 25, 12, 22, 11, 90, 45, 78, 56 };
	int arr2[n] = { 64, 34, 25, 12, 22, 11, 90, 45, 78, 56 };
	bubbleSort(arr1, n);
	selectionSort(arr2, n);
	cout << "Bubble Sort: ";
	for (int i = 0; i < n; ++i) {
		cout << arr1[i] << " ";
	}

    return 0;
}
