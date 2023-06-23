class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        if(k<=1) return 0;
        
        int l = 0;
        int r = 0;
        
        int result = 0;
        int prod = 1;
        while(r < nums.length){
            prod *= nums[r];
            
            while(prod>=k){
                prod /= nums[l];
                l++;
            }
            
            result += r - l + 1;
            r++;
            
            
        }
        
        return result;
    }
}