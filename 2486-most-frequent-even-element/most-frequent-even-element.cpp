class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto& i:nums){
            if(i%2==0) mp[i]++;
        }
        int max_even=-1;
        int freq=0;
        for(auto &[key,val]:mp){
            if(val>freq){
                freq=val;
                max_even=key;
            }
            if(freq==val){
                max_even=min(max_even,key);
            }
        }
        return max_even;
    }
};