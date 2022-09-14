//Problem Link: https://leetcode.com/problems/implement-strstr/


//First Approach------>
class Solution {
public:    
    int strStr(string haystack, string needle) {
        int la = haystack.size();
        int lb = needle.size();
        
        for(int i = 0; i <= (la - lb); i++)
        {
            if(haystack.substr(i, lb) == needle) return i;
        }
        return -1;
    }

};

/*
Time complexity : O(N*M) 
Space complexity: O(1)
*/



//Second Approach------>
class Solution {
public:
    
    vector<long long> prefixHash, pow;
    int base = 29, MOD = 1000000007;

    void preprocess(string &haystack){
    prefixHash[0] = haystack[0];
    for(int i = 1; i < haystack.size(); i++)
        {
            prefixHash[i] = (prefixHash[i-1] * base) + haystack[i];
            if(prefixHash[i] >= MOD) prefixHash[i] %= MOD;
            pow[i] = (pow[i-1] * base) % MOD;
        }
    }


    long long getHashRange(int L, int R){
        long long x1 = prefixHash[R];
        long long x2 = L == 0 ? 0 : (prefixHash[L-1] * pow[R - L + 1]) % MOD;
        return (x1 - x2 + MOD) % MOD;
    }

    long long generateHash(string &str){
        long long h = 0;
        for(auto s : str)
        {
            h = (h * base) + s;
            h %= MOD;
        }
        return h;
    }
    
    int strStr(string haystack, string needle) {
        int la = haystack.size();
        int lb = needle.size();
        prefixHash.resize(la + 1, 0);
        pow.resize(la + 1, 1);
        preprocess(haystack);

        long long needleHash = generateHash(needle);
        for(int i = 0; i <= (la - lb); i++)
        {
            if(getHashRange(i, i + lb - 1) == needleHash)
                return i;
        }
        return - 1;
    }
};

/*
Time complexity : O(N+M) 
Space complexity: 
*/