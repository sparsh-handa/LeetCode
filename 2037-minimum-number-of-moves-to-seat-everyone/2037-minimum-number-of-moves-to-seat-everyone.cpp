class Solution {
public:
    int minMovesToSeat(vector<int>& arr1, vector<int>& arr2) 
{
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    
    int ans=0;
    for(int i=0;i<arr1.size();i++)
    {
    	ans=ans+(abs(arr1[i]-arr2[i]));
	}
	return ans;
}
};