class Solution {
public:
//     int lengthOfLongestSubstring(string s) {
        // int hash[256];
        // memset(hash, -1, sizeof(hash));
        // int n = s.size();
        // int l = 0, r = 0, maxlen = 0, len;
        // while (r < n) {
        //     if (hash[s[r]] != -1) {
        //         l = max(l, hash[s[r]] + 1);
        //     }
        // }
        // len = r - l + 1;
        // maxlen = max(len, maxlen);
        // hash[s[r]] = r;
        // r++;
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp; 
        int maxLength = 0; 
        int l = 0;  

        for (int r = 0; r < s.size(); r++) {
            if (mp.find(s[r]) != mp.end() && mp[s[r]] >= l) {
                l = mp[s[r]] + 1;
            }
            mp[s[r]] = r;

            maxLength = max(maxLength, r - l + 1);
        }

        return maxLength;
    }
};

  