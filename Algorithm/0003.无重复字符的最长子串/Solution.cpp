class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int res = 0;
        for (int i = 0, j = 0; j < s.size(); j ++)
        {
            hash[s[j]] ++;
            while (hash[s[j]] > 1) hash[s[i ++]] --;
            res = max(res, j - i + 1);
        }
        return res;
    }
};
