class Solution {
public:
    int jump(vector<int>& nums) {
         
        int farthest = 0;
        int currentInterval = 0;
        int count=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            
            farthest = max(farthest, nums[i]+i);
            
            if(i==currentInterval)
            {
                count++;
                currentInterval = farthest;
            }
        }
        
        return count;
        
    }
};
