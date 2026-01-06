class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set(nums1.begin(), nums1.end());
        unordered_set<int> ist;
        for(auto& i:nums1){
            set.insert(i);
        }
        for(auto& i:nums2){
            if(set.contains(i)){
                ist.insert(i);
            }
        }
        return vector<int>(ist.begin(), ist.end());
    }
};