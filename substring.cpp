/*Program to find longest substring without repeating elements
1. Brute Force --> find all the substring and then shorlist the one which is 
longest and have unique elements
*/

#include <iostream>
#include <vector>
using namespace std;

int longestSubstring(string s)
{
    int left, right, n = s.size();
    vector<int> mpp(256, -1);
    left = right = 0;
    int len = 0;
    while(right < n)
    {
        //if element already exist..
        if(mpp[s[right]]) left = max(mpp[s[right]] + 1, left);

        
        mpp[s[right]] = right; // if element is not present
        
        len = max(len, right - left);
        right++;
    }
    return len;
}
int main()
{

    string s = "abcabcbb";
    cout<<longestSubstring(s)<<endl;
    
    return 0;
}