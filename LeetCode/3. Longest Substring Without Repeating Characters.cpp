class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256, 0);
        int left = 0, right = 0, cnt = 0;
        int longestLength = 0;
        
        while(right < s.size())
        {
            freq[s[right]]++;
            if(freq[s[right]] > 1)
            {
                cnt++;
            }
            right++;
            
            while(cnt > 0)
            {
                freq[s[left]]--;
                if(freq[s[left]] == 1)
                {
                    cnt--;
                }
                left++;
            }
            
            longestLength = max(longestLength, right-left);
        }
        return longestLength;
    }
};

/*
Time complexity : O(N) 
Space complexity: O(1)
*/