//Problem Link: https://leetcode.com/problems/valid-anagram/


class Solution {
public:    
    bool isAnagram(string s, string t) {
        vector<int> freq(130, 0);
        
        for(int i = 0; i < (int)s.size(); i++)
        {
            freq[s[i] - '0']++;
        }
        
        for(int i = 0; i < (int)t.size(); i++)
        {
            freq[t[i] - '0']--;
        }
        
        for(int i = 0; i < (int)freq.size(); i++)
        {
            if(freq[i] != 0) return false;
        }
        
        return true;
    }

};

/*
Time complexity : O(N) 
Space complexity: O(N)
*/


class Solution {
public:
    const long long MOD = 202206214218227LL; //use a large sophie germain prime for less
collisions! FYI, 10^9 + 7 is a sophie germain prime

    long long getHash(string &s) {
    long long h = 1;
    for (auto c : s) {
        h = h * (c + 257) % MOD;
    }
    return h;
    }

    bool isAnagram(string s, string t) {
        return getHash(s) == getHash(t);
    }
};

/*
Time complexity : O(N) 
Space complexity: O(1)
*/