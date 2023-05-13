// not working perfectly

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int count1, count2;
        
        int i = 0;
        while(i < s.size())
        {
            count1 = count2 = 0;
            int k = i+1;
            while(s[k] == s[k-1]){
                count1++;
            }
            k = i+1;
            while(t[k] == t[k-1]){
                count2++;
            }
            if(count1 != count2){
                return false;
            }
        }
        return true;
    }
};