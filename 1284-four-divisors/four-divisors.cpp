class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int tsum = 0;
        for (auto& it : nums) {
            int sum = 0;
            int count = 0;
            for (int i = 1; i * i <= it; i++) {
                if (it % i == 0) {
                    if (i == it / i) {
                        count++;
                        sum += i;
                    } else {
                        sum = sum + i + (it / i);
                        count = count + 2;
                    }
                    if (count > 4) {
                        sum = 0;
                        break;
                    }
                }
            }
                if (count == 4) {
                    tsum = tsum + sum;
                } 
        }
        return tsum;
    }
};