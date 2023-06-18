class Solution {
public:
    
    vector<vector<int>> ans;
    
    void help(int i,vector<int> &nums,vector<int> &temp, bool flag)
    {
        
        if(i==nums.size())
        {
            ans.push_back(temp);
        }
        
        else{
            
            help(i+1,nums,temp,false);
            
            if(i>0 && nums[i]==nums[i-1] && !flag)
            {
                return ;
            }
            
            temp.push_back(nums[i]);
            help(i+1,nums,temp,true);
            
            temp.pop_back();         
            
        }    
    }  
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<int> temp;
        
        help(0,nums,temp,false);
        
        return ans;
        
        
        
    }
};