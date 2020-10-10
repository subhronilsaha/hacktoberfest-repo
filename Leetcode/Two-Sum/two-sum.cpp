class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> r;
        unordered_map<int, int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                r.push_back(m[target-nums[i]]);
                r.push_back(i);
                return r;
            }
            else
            {
                m[nums[i]]=i;
            }
                
        }
        
        return r;
    }
};