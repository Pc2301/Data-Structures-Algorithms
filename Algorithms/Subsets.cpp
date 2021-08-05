using namespace std;

#include<iostream>
#include<vector>

class Subsets

{
public:

	static vector<vector<int>>findSubsets(const vector<int> &nums)
	{
		vector<vector<int>>subsets;

		//Push empty element to subsets 

		subsets.push_back(vector<int>());

		for(auto currentNumber:nums)
		{
			int n=subsets.size();

            for(int i=0;i<n;i++)
            {
            	//Create a new vector

            	vector<int>temp(subsets[i]);

                temp.push_back(currentNumber);

                subsets.push_back(temp);
            }

		}

	return subsets;
	}
};

int main(int argc, char* argv[]) {
  vector<vector<int>> result = Subsets::findSubsets(vector<int>{1, 3});
  cout << "Here is the list of subsets: " << endl;
  for (auto vec : result) {
    for (auto num : vec) {
      cout << num << " ";
    }
    cout << endl;
  }

  result = Subsets::findSubsets(vector<int>{1, 5, 3});
  cout << "Here is the list of subsets: " << endl;
  for (auto vec : result) {
    for (auto num : vec) {
      cout << num << " ";
    }
    cout << endl;
  }
}

// The concept is we take a numbr from the given set and then add this number to all existing subsets 

// Time Complexity : If N numbers than 2^N subsets