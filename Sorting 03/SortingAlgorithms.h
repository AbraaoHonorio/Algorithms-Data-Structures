#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>


class SortingAlgorithms
{
private:

protected:

public:
	SortingAlgorithms();
	void selectionSort(std::vector<int> &vElements);
	void insertSort(std::vector<int> &vElements);
	void mergeSort(int begin, int end, std::vector<int> &vElements);
	void quickSort(int begin, int end, std::vector<int> &vElements);
	void heapSort(std::vector<int> &vElements);
	void countingSort(std::vector<int> &vElements);
	void bucketSort(std::vector<int> &vElements);
	void radixSort(std::vector<int> &vElements);
};

#endif
