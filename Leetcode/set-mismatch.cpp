class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int present[10000+1]={};
        vector<int> result;
        for(int i=0; i<nums.size(); i++) 
        {
            present[nums[i]]++;
            if(present[nums[i]]==2) result.push_back(nums[i]);
        }
        for(int i=1; i<=nums.size(); i++) if(!present[i]) result.push_back(i);
        return result;
    }
};