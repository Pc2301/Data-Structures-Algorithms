using namespace std;
#include<iostream>

#include<vector>

class MissingNumber
{
public:

	static int findMissingNumber(vector<int> &arr) 

	{
		int n= arr.size()+1;

		// Find XOR of all values from 1 to n

		int x1=1;

		for(int i=2;i<=n;i++)
		{
			x1=x1^i;
		}

		// Find XOR all all values in array

		int x2=arr[0];

		for(int i=1;i<n-1;i++)
		{
			x2=x2^arr[i];


		}

	return x1^x2;
	}
};


int main(int argc, char *argv[]) {
  vector<int> v1 = {1, 5, 2, 6, 4};
  cout << "Missing number is: " << MissingNumber::findMissingNumber(v1);
}