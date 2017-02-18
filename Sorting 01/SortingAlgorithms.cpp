#include "SortingAlgorithms.h"
#include <cmath>

SortingAlgorithms::SortingAlgorithms()
{


}



void SortingAlgorithms::selectionSort(std::vector<int> &vElements)
{

	// Initialization of variables
	size_t smaller = 0;
	int auxVector = 0;

	// Goes through vector's elements
	for(size_t i = 0; i < ( vElements.size() - 1); i++)
	{
		// Searching for the smallest element
		smaller = i;
		for(size_t j = i + 1; j < vElements.size(); j++)
		{
			if(vElements[j] < vElements[smaller])
				smaller  = j;
		}

		// If there was an swap, update vector's elements
		if(smaller != i)
		{
			auxVector = vElements[smaller];
			vElements[smaller] = vElements[i];
			vElements[i] = auxVector;
		}
	}


}

void SortingAlgorithms::insertSort(std::vector<int> &vElements)
{

	/*	DEBUG	*/
	/*  for(int i = 0; i < vElements.size(); i++)
	{
		std::cout<<i<<"\t"<<vElements[i]<<std::endl;
	}*/

	// Initialization of variables
	int auxVector = 0;
	int j = 0;

	//Goes through vector's elements
	for(size_t i = 1; i < vElements.size(); i++)
	{
		auxVector = vElements[i];

		// Sending the highest values forward
		for(j = i; ( (j > 0) && (auxVector < vElements[j - 1]) ); j--)
		{
			vElements[j] = vElements[j - 1];
		}

		vElements[j] = auxVector;


	}

}

void merge(int begin, int center, int end, std::vector<int> &vElements)
{
	// Initialization of variables
	int iB = begin,
		iC = center,
		i = 0;

	std::vector<int> vElementsCopy; //Auxiliary vector
	vElementsCopy.reserve(vElements.size());

	//Comparing the values of the center to the end, and sending the values to the vElementsCopy
	while(iB < center && iC < end)
	{
		if(vElements[iB] <= vElements[iC])
			vElementsCopy[i++] = vElements[iB++];
		else
			vElementsCopy[i++] = vElements[iC++];
	}

	//Sending the remaining values
	while(iB < center)
		vElementsCopy[i++] = vElements[iB++];

	//Sending the remaining values
	while(iC < end)
		vElementsCopy[i++] = vElements[iC++];

	//Sends the sorted values from vElementsCopy to vEtements
	for( iB = begin; iB < end; iB++)
	{
		vElements[iB] = vElementsCopy[iB - begin];
	}


	vElementsCopy.clear();
}

void SortingAlgorithms::mergeSort(int begin, int end, std::vector<int> &vElements)
{
	if( begin < end - 1)
	{
		int	center = std::floor( (begin + end) / 2 ); //Discovering the medium
		mergeSort(begin, center, vElements); //From the beginning to the center
		mergeSort(center, end, vElements); //From the center to the end
		merge(begin, center, end, vElements); //From the beginning to the end
	}

}

int partition(int begin, int end, std::vector<int> &vElements)
{
	// Initialization of variables
	int left = begin, right = end;
	int auxVector = 0, // swap of position
		pivot = vElements[begin]; // Amount of swap

	// Goes through vector's elements
	while( right > left )
	{
		while(pivot >= vElements[left]) // Walking on the left knot
			left++;
		while(vElements[right] > pivot) // Coming back on the left right
			right--;

		if(right > left )
		{
			auxVector = vElements[left];
			vElements[left] = vElements[right];
			vElements[right] = auxVector;
		}
	}


	vElements[begin] = vElements[right];
	vElements[right] = pivot;

	return right;
}
void SortingAlgorithms::quickSort(int begin, int end, std::vector<int> &vElements)
{
	if( end > begin)
	{
		int pivot = partition(begin, end, vElements); // Find out pivot
		quickSort(begin, pivot - 1, vElements); //From the beginning to the pivot-1
		quickSort(pivot + 1, end, vElements); //From the pivot to the end

	}

}



void heapify(int i, int n, std::vector<int> &vElements)
{
	// Initialization of variables
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1; // Left
	int r = 2 * i + 2; // Right

	// If left child is larger than root
	if (l < n && vElements[l] > vElements[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && vElements[r] > vElements[largest])
		largest = r;

	// If largest is not root
	if (largest != i)
	{
		std::swap(vElements[i], vElements[largest]);

		// call the sub-tree
		heapify(largest, n, vElements);
	}
}


void SortingAlgorithms::heapSort(std::vector<int> &vElements)
{
	// Build heap
	for (int i = (vElements.size() / 2 - 1); i >= 0; i--)
		heapify( i, vElements.size(), vElements);

	for (int i = (vElements.size() - 1); i >= 0; i--)
	{
		// Moving the root to the end
		std::swap(vElements[0], vElements[i]);

		// call max heapify on the reduced heap
		heapify(0, i, vElements);
	}
}
