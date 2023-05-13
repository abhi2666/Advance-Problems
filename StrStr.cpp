/*
You just have to check if string needle is present in string haystack
and if yes then you just have to return the first index where the strings starts
matching from.

Time - O(haystack.size() * needle.size())
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i = 0; i < haystack.size(); i++){
            int j = 0, k = i;
            while(needle[j] == haystack[k] && j < needle.size()){j++; k++;}

            if(j == needle.size()) return i;
        }
        return -1;
        
    }
};