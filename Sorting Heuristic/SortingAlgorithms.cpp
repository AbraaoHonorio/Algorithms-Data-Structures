#include "SortingAlgorithms.h"
#include <set>
#include <sstream>
#include <stdlib.h>

SortingAlgorithms::SortingAlgorithms(void)
{


}



void SortingAlgorithms::selectionSort(std::vector<long int> &vElements)
{

	// Initialization of variables
	size_t smaller = 0;
	long int auxVector = 0;

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


long int partition(long int begin, long int end, std::vector<long int> &vElements)
{
	// Initialization of variables
	long int left = begin, right = end;
	long int auxVector = 0, // swap of position
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

void SortingAlgorithms::quickSort(long int begin, long int end, std::vector<long int> &vElements)
{
	if( end > begin)
	{
		long int pivot = partition(begin, end, vElements); // Find out pivot
		quickSort(begin, pivot - 1, vElements); //From the beginning to the pivot-1
		quickSort(pivot + 1, end, vElements); //From the pivot to the end

	}

}

void SortingAlgorithms::radixSort(std::vector<long int> &vElements)
{
	std::vector<long int> vElementsCopy; //Auxiliary vector
	vElementsCopy.reserve(vElements.size());

	long int j = 0;
	//    Build the output array
	for (long int shift = 63; shift > -1; --shift)
	{
		j = 0;

		for (size_t i =0; i < vElements.size(); ++i)
		{
			bool move = (vElements[i] << shift) >= 0;

			if (shift == 0 ? !move : move)
				vElements[i - j] = vElements[i];
			else
				vElementsCopy[j++] = vElements[i];
		}
        //contains sorted numbers according to current digit
		for (long int i = 0; i < j; i++)
		{
			vElements[(vElements.size() - j) + i] = vElementsCopy[i];
		}
	}

	 vElementsCopy.clear();

}



void SortingAlgorithms::countingSort(std::vector<long int> &vElements)
{
	// Initialization of variables
	 long int max = *std::max_element (vElements.begin(), vElements.end()); //In search of the greatest element
	 long int min = *std::min_element (vElements.begin(), vElements.end()); //In search of the smaller element
	 int sizeV = max - std::abs(min) + 1;
 	std::vector<long int> vElementsCopy(sizeV, 0);  //Auxiliary vector
	
	

	for (size_t i = 0; i < vElements.size(); i++)
		vElementsCopy[vElements[i] - min]++;
    
	int index = 0;
	for (int i = min; i <= max; i++)
	{
		while (vElementsCopy[i - min]-- > 0)
			vElements[index++] = i;
	}
}

size_t max_elementStr(std::vector<std::string>* vStr)
{

	size_t max_element = vStr->at(0).size();

	for(size_t i = 1; i < vStr->size(); i++)
	{
		if(vStr->at(i).size() > max_element)
			max_element = vStr->at(i).size();
	}

	return max_element;

}
void countSortStr(std::vector<std::string>* v, size_t loop_i)
{  
	
	int* change = new int[257]; //Auxiliary vector of change
	int size = v->size()-1;
	std::string* vCopy = new std::string[size]; //Auxiliary vector
	

	for(int i = 0; i < 257; i++)
		change[i] = 0;

	for(int i = 0; i < size; i++)
		change[ loop_i < v->at(i).size() ? (int)(unsigned char)v->at(i)[loop_i]+1 : 0 ]++;

	for(int i = 1; i < 257; i++)
		change[i] += change[i-1];

	for(int i = size-1; i >= 0; i--)
	{

		vCopy[ change[ loop_i < v->at(i).size() ? (int)(unsigned char)v->at(i)[loop_i]+1 : 0 ] - 1 ] = v->at(i);
		change[ loop_i < v->at(i).size() ? (int)(unsigned char)v->at(i)[loop_i]+1 : 0 ]--;

	}

	for(int i = 0; i < size; i++)
		v->at(i) = vCopy[i];

	delete[] vCopy;
	delete[] change;

}
void SortingAlgorithms::radixSortStr(std::vector<std::string> *vElementsStr)
{
	size_t max = max_elementStr(vElementsStr);
	for(size_t i = max; i > 0; i--)
		countSortStr(vElementsStr,i-1);
}

void SortingAlgorithms::heuristicSort(std::vector<long int> &vElements)
{
	long int const smallerSize = 22;
	
        if(vElements.size() <= smallerSize)
        { 
            selectionSort(vElements);
            std::cout << "\t*** 1- Selection sort ***\n" << std::endl;
        }
          
        else
        {
            std::cout<<"\t***  Use heuristic ***"<<std::endl;
             /* Calculating the heuristic */
         std::set<long int>setElements(vElements.begin(),vElements.end()); // Sending the elements not repeated(SET)
          int entropy = (setElements.size()*100/vElements.size());
         if(entropy >= 70)
		 {
			 std::cout<<" countingSort	" << entropy <<" %"<<std::endl; //Frequency percentage
			   countingSort(vElements);
		 }
           
        else if (entropy >= 40) 
		{
			std::cout<<" radixSort	" << entropy <<" %"<<std::endl; //Frequency percentage
            radixSort(vElements);

		}
        else 
		{
			std::cout<<" quickSort	" << entropy <<" %"<<std::endl; //Frequency percentage
			quickSort(0, vElements.size() - 1, vElements);
		}
        

        }
}
