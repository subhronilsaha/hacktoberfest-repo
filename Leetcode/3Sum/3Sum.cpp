// https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> r;
        
        if(nums.empty())
            return r;
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size(),i=0;
        
        while(i<=n-3)
        {
            int j=i+1,k=n-1;
            while(j<n && k>=0 && j<k)
            {
                int s=nums[i]+nums[j]+nums[k];
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    r.push_back(v);
                    
                    int prev1=nums[j],prev2=nums[k];
                    j++;
                    k--;
                    while(j<n && nums[j]==prev1)
                        j++;
                    
                    while(k>=0 && nums[k]==prev2)
                        k--;
                }
                else
                    if(s>0)
                        k--;
                else
                    if(s<0)
                        j++;
            }
            
            int prev=nums[i];
            i++;
            while(i<=n-3 && nums[i]==prev)
                i++;
        }
        
        return r;
    }
};