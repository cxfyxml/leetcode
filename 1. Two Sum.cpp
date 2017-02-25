class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j = 0;
        vector<int> r;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    r.push_back(i);
                    r.push_back(j);
                }
            }
        }
        return r;
    }
};