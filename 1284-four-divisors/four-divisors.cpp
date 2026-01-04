class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int tsum = 0;
        for (auto& it : nums) {
            int sum = it;
            int count = 1;
            for (int i = 1; i <= it / 2; i++) {
                if (it % i == 0) {
                    sum += i;
                    count++;
                }
                if (count > 4) {
                    sum = 0;
                    count = 1;
                    break;
                }
            }
            if (count == 4) {
                tsum = tsum + sum;
                count = 1;
            } else {
                count = 1;
            }
        }
        return tsum;
    }
};