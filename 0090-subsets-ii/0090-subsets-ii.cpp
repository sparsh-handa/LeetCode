class Solution {
private:
    
    void help(int i,vector<int>& nums,vector<vector<int>> &ans, vector<int> &ds){
        
        ans.push_back(ds);
        
        for(int j=i;j<nums.size();j++)
        {
            if(j!=i && nums[j]==nums[j-1])continue;    
            ds.push_back(nums[j]);
            help(j+1,nums,ans,ds);
            ds.pop_back();
        }   
    }
       
  public:  
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        vector<int> ds;
         sort(nums.begin(),nums.end());
        help(0,nums,ans,ds);
        
       
        return ans;
        
    }
};