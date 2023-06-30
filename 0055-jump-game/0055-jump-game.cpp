class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int index = nums.size()-1;
        
        for(int i=index;i>=0;i--)
        {
            if(nums[i]+i>=index)
            {
                index = i;
            }
        }
        
        if(index==0) return true;
        else return false;
        
    }
};

 // int n = nums.size();
    // int maxReach = 0;
    // for (int i = 0; i < n; i++) {
    //     if (i > maxReach) return false;
    //     maxReach = max(maxReach, i + nums[i]);
    // }
    // return true;