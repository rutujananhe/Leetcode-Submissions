class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), maxn = 0, curr= 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                curr++;
                maxn = max(maxn, curr);
            } else {
                curr = 0;
            }
        }
        return maxn;
    }
};