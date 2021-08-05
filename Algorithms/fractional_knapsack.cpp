using namespace std;
#include<iostream>
#include<algorithm>
// Defining Struct

struct Item
{
	int value,weight;

	Item(int value, int weight)
    {
       this->value=value;
       this->weight=weight;
    }
};

// It is for comparison while sorting
bool cmp(struct Item a ,struct Item b)
{
	double r1= (double)a.value/(double)a.weight;
	double r2= (double)b.value/(double)b.weight;
    return r1>r2;

}

// Main greedy function to solve problem
double fractionalKnapsack(int W, struct Item arr[], int n)
{
	sort(arr,arr+n,cmp);


// Now pick greedily
	 int curWeight = 0; // Current weight in knapsack
    double finalvalue = 0.0; // Result (value in Knapsack)
 
    // Looping through all Items
    for (int i = 0; i < n; i++) {
        // If adding Item won't overflow, add it completely
        if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
 
        // If we can't add current Item, add fractional part
        // of it
        else {
            int remain = W - curWeight;
            finalvalue += arr[i].value
                          * ((double)remain
                             / (double)arr[i].weight);
            break;
        }
    }
 
    // Returning final value
    return finalvalue;
}
int main() {
  int knapsackWeight = 50;
  Item itemArray[] = {{120, 30}, {100, 20}, {60, 10}};

  int n = sizeof(itemArray) / sizeof(itemArray[0]);

  cout << "Maximum value we can obtain = ";
  cout << fractionalKnapsack(knapsackWeight, itemArray, n);
  return 0;
}