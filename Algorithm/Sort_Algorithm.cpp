#include "stdafx.h"
#include "Sort_Algorithm.h"
#define  n  8
int a[] = { 3,1,5,7,2,4,9,6};

Sort_Algorithm::Sort_Algorithm()
{
}


Sort_Algorithm::~Sort_Algorithm()
{
}

void Sort_Algorithm::straightInsertionSortTest() {
	straightInsertionSort(a, n);
	print(a, n, n);
}

void Sort_Algorithm::shellSortTest() {
	shellSort(a, n);
	print(a, n, n);
}

void Sort_Algorithm::selectionSortTest() {
	selectionSort(a, n);
	print(a, n, n);
}

void Sort_Algorithm::binarySelectionSortTest() {
	binarySelectionSort(a,n);
	print(a, n, n);
}

void Sort_Algorithm::heapSortTest() {
	heapSort(a, n);
	print(a, n, n);
}