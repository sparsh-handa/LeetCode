class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int mid = n/2;
        int ans;
        for(auto it:mp)
        {
            if(it.second>mid)
            {
                ans =  it.first;
                break;
            }
        }
        
        return ans;
    }
    
};