    1   //Given an array of positive numbers and a positive number ‘k,’ find the maximum sum of any contiguous subarray of size ‘k’.
 

 // Brute Force 

using namespace std;

#include <iostream>
#include <vector>

class MaxSumSubarrayK
{

public: 

	static int findMaxSumSubarrayBruteForce(int k, const vector<int>&a){

	  int maxSum=0,windowSum;

      for(int i=0;i<a.size()-k;i++)
      {
      	 windowSum=0;
      	for(int j=i;j<i+k;j++)
      	{
      		windowSum+=a[j];
      	}

      	maxSum=max(maxSum,windowSum);
      }
      return maxSum;

    }


    static int findMaxSumSubarraySlidingWindow(int k,const vector<int> &a)

    {
       int startWindow=0;
  
       int maxSum=0;
       int windowSum=0;


       for(int endWindow=0;endWindow<a.size();endWindow++)
       {
       	  windowSum+=a[endWindow]; //add the next element
          if(endWindow>=k-1)
          {
          	maxSum=max(maxSum,windowSum);
          	windowSum-=a[startWindow];
          	startWindow++;

          }
          
       }

       return maxSum;
    }


};
int main() {
  cout << "Maximum sum of a subarray of size K: "
       << MaxSumSubarrayK::findMaxSumSubarrayBruteForce(3, vector<int>{2, 1, 5, 1, 3, 2}) << endl;
  cout << "Maximum sum of a subarray of size K: "
       << MaxSumSubarrayK::findMaxSumSubarrayBruteForce(2, vector<int>{2, 3, 4, 1, 5}) << endl;
   cout << "Maximum sum of a subarray of size K: "
       << MaxSumSubarrayK::findMaxSumSubarraySlidingWindow(3, vector<int>{2, 1, 5, 1, 3, 2}) << endl;
  cout << "Maximum sum of a subarray of size K: "
       << MaxSumSubarrayK::findMaxSumSubarraySlidingWindow(2, vector<int>{2, 3, 4, 1, 5}) << endl;

  
  

}