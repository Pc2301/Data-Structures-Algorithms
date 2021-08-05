using namespace std;
#include<vector>
#include<iostream>


int coinsAvailable[] = {1, 5, 10, 25};

int n = sizeof(coinsAvailable) / sizeof(coinsAvailable[0]);

void findMinCoins(int V) {
  // Initialize result 
  vector <int> ans;

  // Traverse through all available coins
  for (int i = n - 1; i >= 0; i--) {
    while (V >= coinsAvailable[i]) {
      V -= coinsAvailable[i];
      ans.push_back(coinsAvailable[i]);
    }
  }

  // Print result 
  for (int i = 0; i < ans.size(); i++) {
    if (i == ans.size() - 1)
      cout << ans[i] << "  ";
    else
      cout << ans[i] << ",  ";
  }

}

// Driver program 
int main() {
  int n = 19;
  findMinCoins(n);
  return 0;
}

// Time Complexity =O(n2) . This is not the optimal so;lution