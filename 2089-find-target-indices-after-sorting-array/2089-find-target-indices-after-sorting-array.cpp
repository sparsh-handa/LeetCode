class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort (nums.begin(), nums.end());
        
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        vector <int> ans;
        
        
        while (low <= high)
        {
            mid = (high+low)/2;
            
            if (nums[mid] == target)
            {
                ans.push_back (mid);
                break;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        
        /*If no instance is found then we return the empty array as there cannot be any other duplicate*/
        if (ans.size() == 0)
            return ans;
        
        int tmid = mid;
        
        /*Checking the left side of the found element*/
        mid--;
        while (mid >= 0 && nums[mid] == target)
        {
            ans.push_back (mid);
            mid--;
        }
        
        mid = tmid;
        
        
        /*Checking the right side of the found element*/
        mid++;
        while (mid < nums.size() && nums[mid] == target)
        {
            ans.push_back (mid);
            mid++;
        }
        
        
        //Sorting the found element in ascending order
        sort (ans.begin(), ans.end());
        
        return ans;
        
    }
};
