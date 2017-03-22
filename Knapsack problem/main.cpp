// A Dynamic Programming based solution for 0-1 Knapsack problem
#include <iostream>
#include <vector>

struct Item {
    unsigned int value;
    unsigned int weight;
};

struct Knapsack {
    unsigned int maxWeight;
};

// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }




// Returns the maximum value that can be put in a knapsack of capacity W 
void knapSack(Knapsack& knapsack, std::vector<Item>& items , std::vector<unsigned int>& vWeight){
    unsigned int K[items.size()+1][knapsack.maxWeight+1];
    std::vector<Item> I[items.size()+1][knapsack.maxWeight+1];
    

    // Build table K[][] in bottom up manner
    for(unsigned int i = 0; i <= items.size(); i++){
        for(unsigned int w = 0; w <= knapsack.maxWeight; w++){
            if(i==0 || w==0) K[i][w] = 0;
            else if(items[i-1].weight <= w){
                K[i][w] = max(items[i-1].value + K[i-1][w - items[i-1].weight], K[i-1][w]);
                if((items[i-1].value + K[i-1][w - items[i-1].weight]) > (K[i-1][w])){
                    I[i][w] = I[i-1][w - items[i-1].weight];
                    I[i][w].push_back(items[i-1]);
                }
                else {
                    I[i][w] = I[i-1][w];
                }
            }
            else {
                K[i][w] = K[i-1][w];
                I[i][w] = I[i-1][w];
            }
        }
    }


    std::cout << "\n valor : " << K[items.size()][knapsack.maxWeight] << std::endl;
    
    std::cout << "produtos escolhidos : ";
for(unsigned int i = 0; i < I[items.size()][knapsack.maxWeight].size(); i++)
{
       //DEBUG
	// std::cout << I[items.size()][knapsack.maxWeight][i].weight << ", ";
	unsigned int value = I[items.size()][knapsack.maxWeight][i].weight;
	//Returns index according to product
	 for (unsigned int j = 0; j <= vWeight.size(); j++)
   	 {
		if(vWeight[j]==value)
		std::cout<<j+1 << " ";
		
	}

  
}
              std::cout << std::endl;
} 

/* Reading the inputs */
 void readInput()
{
	unsigned int backpackCapacity, amountObject, weightInput, valuetInput;
	std::cin >> amountObject>> backpackCapacity;

	std::vector<unsigned int> vWeight;

	
	vWeight.reserve(amountObject);

	for ( unsigned int i = 0; i < amountObject; ++i)
	{
		std::cin >> weightInput;  

		vWeight.push_back(weightInput);
	}  

	
	std::vector< unsigned int> vValue;
	 vValue.reserve(amountObject);

	for ( unsigned int i = 0; i < amountObject; ++i)
	{
	       std::cin >> valuetInput;
		vValue.push_back(valuetInput);
	}  


	std::vector<Item> items;
	for ( unsigned int i = 0; i < amountObject; ++i)
	{
	Item tempItem;
	tempItem.value = vValue[i];
	tempItem.weight = vWeight[i];
		items.push_back(tempItem);
	}
	
	/* DEBUG */
	/*std::cout <<"PESOS  | VALORES"<<std::endl;

	for ( unsigned int i = 0; i < amountObject; ++i)
	{
	std::cout<< items[i].weight << "  |  " << items[i].value <<std::endl;
	}*/

	Knapsack knapsack = {backpackCapacity};
	knapSack(knapsack, items, vWeight);
    

}

int main()
{
   readInput();


   return 0;
}