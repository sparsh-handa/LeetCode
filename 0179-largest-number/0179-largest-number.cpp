class Solution {
public:
    static bool compareNumbers(int a, int b) {
        string num1 = to_string(a);
        string num2 = to_string(b);
        return num1 + num2 > num2 + num1;
    }

    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compareNumbers);

        string ans;
        for(int i = 0; i < nums.size(); i++) {
            ans += to_string(nums[i]);
        }
        
        // Handle the case where the largest number is 0
        if (ans[0] == '0') {
            return "0";
        }

        return ans;
    }
};
