class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        if(n<=2) return n;
         
        int k = 0;
        
        for(int i=2;i<n;i++)
        {
            if(nums[i]!=nums[k])
            {
                nums[k+2] = nums[i];
                k++;
            }
        }
        return k+2;
    }
};