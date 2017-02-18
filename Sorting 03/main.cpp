#include <time.h>
#include <chrono>

#include "SortingAlgorithms.h"
using namespace std;
using namespace std::chrono ;


int main(int argc, char** argv)
{

	
	int numberElements;
	int numberInput;

	//Checking the input
	if(argc != 2)
	{
		cout << "\n\n \t *** ERROR! *** \n" << endl;

		cout << "\t" << argv[0] << " <method_number> < <input_file_name>" << endl;

		cout << "\t -> Menu - sorting methods:\n"
			 "\t 1- Selection sort \n"
			 "\t 2- Insertion sort \n"
			 "\t 3- merge\n"
			 "\t 4- quick\n"
			 "\t 5- heap\n";

		return -1;
	}

	std::cin >> numberElements;

    std::vector<int> vElements;
	vElements.reserve(numberElements);
	
	for (int i = 0; i < numberElements; ++i)
	{
		std::cin >> numberInput;
		vElements.push_back(numberInput);
	}

	//Creating the object the class SortingAlgorithms
	SortingAlgorithms *sortingAlgorithms = new SortingAlgorithms();
        
 	/* [DEBUG] - Time check 
	 auto start = steady_clock::now() ; */


	//Checking the input - Associating the number with thesorting methods:
	switch ( atoi(argv[1]) )
	{

	case 1:
		sortingAlgorithms->selectionSort(vElements);

		cout << " \t*** 1- Selection sort ***" << endl;
		for(size_t i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}
		break;
	case 2:
		sortingAlgorithms->insertSort(vElements);
		cout << "\t*** 2- Insertion sort ***" << endl;
		for(size_t i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}
		break;
	case 3:
		sortingAlgorithms->mergeSort(0, vElements.size(), vElements);
		cout << "\t*** 3- merge ***" << endl;
		/*for(size_t i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}*/

		break;
	case 4:
		sortingAlgorithms->quickSort(0, vElements.size() - 1, vElements);

		cout << "\t*** 4- quick ***" << endl;
		for(size_t i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}
		break;
	case 5:
		sortingAlgorithms->heapSort(vElements);
		cout << "\t*** 5- heap ***" << endl;
		for(size_t i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}
		break;

		case 6:
		sortingAlgorithms->countingSort(vElements);
		cout << "\t*** 6- Counting ***" << endl;		
		for(size_t i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}
		break;

		case 7:
		sortingAlgorithms->bucketSort(vElements);
		cout << "\t*** 7- Bucket ***" << endl;		
		for(size_t i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}
		break;

		case 8:
		sortingAlgorithms->bucketSort(vElements);
		cout << "\t*** 7- Radix ***" << endl;		
		for(size_t i = 0; i < vElements.size(); i++)
		{
			std::cout << vElements[i] << std::endl;
		}
		break;
	}

	 /* [DEBUG] - Time check 
	 auto end = steady_clock::now() ;
     std::cout << "\t that took " << duration_cast<milliseconds>(end-start).count()
              << " milliseconds\n" ;*/


	return 0;
}
