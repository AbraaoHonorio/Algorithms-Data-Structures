#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <iostream>
#include <vector>


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
	//int minElement(std::vector<int> &vector);
};

#endif
