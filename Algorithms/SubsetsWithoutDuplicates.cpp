// The concept is we sort the array so that duplicates are adjacent
// If the number is a duplicate we only add it to the subsets created in the last stage ignoring previous ones
//Pseudocode
//1. Sort the array (vector) which is given
//2. for given number in array we will add them into current elements of subset.
//3. If the number is not duplicate we will add it to all current subsets meaning startIndex=0 and endIndex=array.size()-1;
//4. If duplicate then startIndex=previousEndIndex+1 , endIndex=array.size()-1;
 
using namespace std;

#include<iostream>
#include<vector>
#include<algorithm>


class SubsetWithoutDuplicates
{
public:

static vector<vector<int>> findSubsets(vector<int>& nums)
{
	//Sorting the vector
	sort(nums.begin(),nums.end());

	vector<vector<int>>subsets;

	subsets.push_back(vector<int>()) ;  // Empty Vector

	int startIndex=0;
	int endIndex=0;

    for(int i=0;i<nums.size()-1;i++)
    {
       startIndex=0;

       if(i>0 && nums[i]==nums[i-1])
       {

       	startIndex=endIndex+1;       
       }
    

    endIndex=subsets.size()-1;

    for(int j =startIndex;j<=endIndex;j++)
    {
    	vector<int>temp(subsets[j]);
      temp.push_back(nums[i]);
        subsets.push_back(temp);
    }
    }
return subsets;
}


};
int main(int argc, char* argv[]) {
  vector<int> vec = {1, 3, 3};
  vector<vector<int>> result = SubsetWithoutDuplicates::findSubsets(vec);
  cout << "Here is the list of subsets: " << endl;
  for (auto vec : result) {
    for (auto num : vec) {
      cout << num << " ";
    }
    cout << endl;
  }

  vec = {1, 5, 3, 3};
  result = SubsetWithoutDuplicates::findSubsets(vec);
  cout << "Here is the list of subsets: " << endl;
  for (auto vec : result) {
    for (auto num : vec) {
      cout << num << " ";
    }
    cout << endl;
  }
}
