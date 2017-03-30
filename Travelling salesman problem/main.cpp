#include <iostream>
#include <vector>

void readInput(void);

int main(void)
{
     readInput();
    return 0;
}

void readInput()
{
    int route = 0, 
        numberInput = 0;

    std::cin >> route;

    std::vector< std::vector<int> > mDistance;

  for (int i = 0; i < route; i++)
  {
      std::vector<int> vTemp;
      for (int j = 0; j < route; j++)
      {
           std::cin >>  numberInput;
           vTemp.push_back ( numberInput ); 
      }
      mDistance.push_back( vTemp );
  }

 std::cout << "\n \t *************** \n" << std::endl;
  // Print out the elements
   for(unsigned int i = 0; i< mDistance.size(); i++) 
   {
      for (unsigned int j = 0; j < mDistance[i].size(); j++)
          std::cout << "\t" <<  mDistance[i][j] << " "; 

      std::cout << std::endl;
   }


}