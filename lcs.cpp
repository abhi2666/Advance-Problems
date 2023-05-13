// Longest Consecutive Sequence 
/*
Given an unsorted array of integers nums, return the length of the 
longest consecutive elements sequence.

Approach --> you can use a set to store elements 
1. while traversing, check if ele-1 exxist or not-
if it exist then do nothing and if it doesn't exists then -
2. run another loop to check for ele + 1 present in set or not
and keep a counter to check for the length of sequence.
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
        }
        // being a set --> it will store unique elements in sorted order..
        // check 
        int maxCount = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(!s.count(nums[i] - 1)){
                // means there is no consecutive element before the current element
                // this element is the starting element of a new sequence..
                int cnt = 1, k = 1;
                while(s.count(nums[i] + k)){
                    cnt++;
                    k++;
                    
                }

                if(cnt > maxCount){
                    maxCount = cnt;
                }
            }
        }

        return maxCount;
    }
};