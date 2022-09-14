class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if(strs.size() == 0) return "";
        
        for(int i = 0; i < strs[0].size(); i++)
        {
            for(string s : strs)
            {
                if(strs[0][i] == s[i]) continue;
                else return prefix;
            }     
            prefix += strs[0][i];
        }
        return prefix;
    }
};

/*
Time complexity : O(N * minLength(string)) 
Space complexity: O(1)
*/