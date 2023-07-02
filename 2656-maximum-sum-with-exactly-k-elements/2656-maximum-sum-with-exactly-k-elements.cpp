class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        int sum = 0;
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        while(k>0)
        {
            sum = sum + nums[n-1];
            nums[n-1] = nums[n-1]+1;
            k--;
        }    
             
        return sum;    
        
    }
};