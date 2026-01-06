class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int total=0,n=nums.size();
        vector<int> res;
        unordered_set<int> set(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
            if(!set.contains(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};