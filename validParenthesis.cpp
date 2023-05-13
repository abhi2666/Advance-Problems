/*
Input: s = "()[]{}"
Output: true
*/

class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        
        for(int i = 0; i < s.size(); i++){
            if(s[0] == '(' || s[0] == '{' || s[0] == '['){
            return false; //you can't do anything if your starting paranthesis is closing one
        }
        }
        
    }
};