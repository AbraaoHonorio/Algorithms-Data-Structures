#include "SortingAlgorithms.h"


#include <sstream>
#include  <cstring>


bool isNumber(std::string s);

int main(void)
{
   
    
    size_t numberElements = 0;
    long int numberInput = 0;

    std::cin >> numberElements;
     
    std::string vStrElements;
    std::vector<std::string> vElementsStr;

    std::vector<long int> vElements;
	vElements.reserve(numberElements);
    

     std::string strInput = "";
      std::cin >> strInput;


    // std::cout<<" fafasf "<<strInput<<std::endl;


   
    SortingAlgorithms *sortingAlgorithms = new SortingAlgorithms();
    if(isNumber(strInput))
    {   
        numberInput = std::stoi(strInput);
        vElements.push_back(numberInput);
        for (size_t i = 0; i < numberElements; ++i)
        {
            std::cin >> numberInput;
            vElements.push_back(numberInput);
        }

        sortingAlgorithms->heuristicSort(vElements);
        for(size_t i = 0; i < numberElements; i++)
        {
            std::cout << vElements[i] << std::endl;
        }  
    }
    else
    {
         vElementsStr.push_back(strInput);
        for (size_t i = 0; i < numberElements; ++i)
        {
            std::cin >> strInput;
            vElementsStr.push_back(strInput);
        }
          std::cout<<"\t***  Use String ***"<<std::endl;
          sortingAlgorithms->radixSortStr(&vElementsStr);
          
         for(size_t i = 0; i < numberElements; i++)
        {
            std::cout << vElementsStr[i] << std::endl;
        } 
    
           
    }
    
     
    return 0;
}

bool isNumber(std::string s) 
{
    return( strspn( s.c_str(), "-.0123456789" ) == s.size() );
}