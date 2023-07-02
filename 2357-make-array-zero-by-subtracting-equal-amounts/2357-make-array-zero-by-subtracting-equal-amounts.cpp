class Solution {
public:
   int minimumOperations(vector<int>& nums) {
    unordered_set<int> s;
    for(auto i:nums) if(i!=0) s.insert(i);
    return s.size();
}
};

// int minimumOperations(vector<int>& nums) {
//         int prevSum = 0, count = 0;
//         sort(nums.begin(), nums.end());
//         for(int i=0; i<(int)nums.size(); i++) {
//             if(nums[i] == 0) continue;
//             if(nums[i]-prevSum > 0) {
//                 count++;
//                 prevSum += (nums[i]-prevSum);
//             }
//         }
//         return count; 
//     }