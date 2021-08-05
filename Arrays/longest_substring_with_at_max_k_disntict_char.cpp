using namespace std;

#include<iostream>
#include<string>
#include<unordered_map>

class LongestSubstringKDistinct{

public:

    static int findLength(const string &str ,int k )
    {
        int windowStart=0, maxLength=0;

        unordered_map<char,int> charFrequencyMap;

        for(int windowEnd=0;windowEnd<str.length();windowEnd++)
        {
            char rightChar= str[windowEnd];
            charFrequencyMap[rightChar]++;

            while(charFrequencyMap.size()>k)
            {
                char leftChar=str[windowStart];
                charFrequencyMap[leftChar]--;
                if (charFrequencyMap[leftChar] == 0) 
                {
                        charFrequencyMap.erase(leftChar);
                }

                windowStart++;

            }

         maxLength=max(maxLength,windowEnd-windowStart+1);

        }

        return maxLength;
    } 
        
      
};


int main() {
  cout << "Length of the longest substring: " << LongestSubstringKDistinct::findLength("araaci", 2)
       << endl;
  cout << "Length of the longest substring: " << LongestSubstringKDistinct::findLength("araaci", 1)
       << endl;
  cout << "Length of the longest substring: " << LongestSubstringKDistinct::findLength("cbbebi", 3)
       << endl;
}
