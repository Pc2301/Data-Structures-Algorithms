using namespace std;
#include<iostream>

void findLargestNumber(int numberOfDigits, int sumOfDigits)
{
	//Boundary Case-1

	if(sumOfDigits==0)
	{
		if(numberOfDigits==1)
		{
			cout<<"Largest Number is"<<0;
        }

        else
        {
        	cout<<"Largest Number is Not Possible";

            return ;
        }

        

    }
   
   //Boundary Case-2 if Sum of digits is greater than the maximum sum possible

    if(sumOfDigits > 9 * numberOfDigits)

    {
    	cout << "Largest number is Not possible";
    return;
  
    }

int * result = new int[numberOfDigits];

  // Fill from most significant digit to least significant digit! 
  for (int i = 0; i < numberOfDigits; i++) {
    // Place 9 to make the number largest 
    if (sumOfDigits >= 9) {
      result[i] = 9;
      sumOfDigits -= 9;
    }

    // If remaining sum becomes less than 9, then fill the remaining sum 
    else {
      result[i] = sumOfDigits;
      sumOfDigits = 0;
    }
  }

  cout << "Largest number is ";
  for (int i = 0; i < numberOfDigits; i++)
    cout << result[i];
  
  delete result;
}

int main() {
  int sumOfDigits = 20;
  int numberOfDigits = 3;
  
  cout << "If sum of digits is 20 and number of digits is 3 then ";
  findLargestNumber(numberOfDigits, sumOfDigits);
  cout << endl << endl;
  
  //Example 2
  sumOfDigits = 100;
  numberOfDigits = 2;
  
  cout << "If sum of digits is 100 and number of digits is 2 then ";
  findLargestNumber(numberOfDigits, sumOfDigits);
  
  return 0;



}