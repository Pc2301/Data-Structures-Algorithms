using namespace std;
#include<iostream>
#include<vector>

int policeThief(char policeThiefArray[], int n, int k) { 
	int result = 0; 
	vector<int> thieves; 
	vector<int> police; 

	// store indices in the respective vector
	for (int i = 0; i < n; i++) { 
		if (policeThiefArray[i] == 'P') 
			police.push_back(i); 
		else if (policeThiefArray[i] == 'T') 
			thieves.push_back(i); 
	} 

	int trackThieves = 0, trackPolice = 0; 
	while (trackThieves < thieves.size() && trackPolice < police.size()) { 
		if (abs(thieves[trackThieves] - police[trackPolice]) <= k) { 
			result++; 
			trackThieves++; 
			trackPolice++; 
		} 

		// increment the minimum index 
		else if (thieves[trackThieves] < police[trackPolice]) 
			trackThieves++; 
		else
			trackPolice++; 
	} 

	return result; 
} 

int main() { 
	int k, n; 

  char policeTheifArray1[] = { 'T', 'T', 'P', 'P', 'T', 'P'}; 
	k = 4; 
	n = sizeof(policeTheifArray1) / sizeof(policeTheifArray1[0]); 
	cout << "Maximum thieves caught for { 'T', 'T', 'P', 'P', 'T', 'P'}: " << policeThief(policeTheifArray1, n, k) << endl; 
  
  return 0; 
} 