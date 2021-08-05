using namespace std;

#include<iostream>
# include<vector>
#include <limits>

class smallestSum
{

public:

	static int smallestSumSubarray(int sum,const vector<int> &a )
	{
		int windowSum=0;

		int minLength = numeric_limits<int>::max();

		int windowStart=0;

		for(int windowEnd=0;windowEnd<a.size();windowEnd++)
		{
			windowSum+=a[windowEnd];



			while( windowSum>=sum)

			{   minLength=min(minLength,windowEnd-windowStart+1);
				windowSum-=a[windowStart];
				windowStart++;

			}


			
		}

		return minLength == numeric_limits<int>::max() ? 0 : minLength;
	}
};


int main() {
  int result = smallestSum::smallestSumSubarray(7, vector<int>{2, 1, 5, 2, 3, 2});
  cout << "Smallest subarray length: " << result << endl;
  result = smallestSum::smallestSumSubarray(5, vector<int>{2, 1, 5, 2, 8});
  cout << "Smallest subarray length: " << result << endl;
  result = smallestSum::smallestSumSubarray(8, vector<int>{3, 4, 1, 1, 6});
  cout << "Smallest subarray length: " << result << endl;
}