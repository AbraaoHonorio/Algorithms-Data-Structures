#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include <string>

class SortingAlgorithms
{
private:

protected:

public:
	SortingAlgorithms();
	void heuristicSort(std::vector<long int> &vElements);
	void selectionSort(std::vector<long int> &vElements);
	void quickSort(long int begin, long int end, std::vector<long int> &vElements);
	void countingSort(std::vector<long int> &vElements);
	void radixSort(std::vector<long int>  &vElements);
	void radixSortStr(std::vector<std::string> *vElementsStr);	/*void bucketSort(std::vector<long int> &vElements);
	void radixSortString(std::vector<std::string> &vElements);*/

};

#endif
