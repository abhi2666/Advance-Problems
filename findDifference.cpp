class Solution {
public:
    char findTheDifference(string s, string t) {
        int hash[26] = {0};
        for(int i = 0; i < t.size(); i++)
        {
            hash[t[i]-'a']++;
        }
        // check
        for(int i = 0; i < s.size(); i++)
        {
            hash[s[i]-'a']--;
        }
        // check
        for(int i = 0; i < t.size(); i++)
        {
            if(hash[i] != 0)
            {
                return (i+'a');
            }
        }
    }
};