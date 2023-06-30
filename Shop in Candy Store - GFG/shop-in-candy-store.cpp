//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies,candies+N);
        
        int mini=0;
        int buy=0;
        int freeC = N-1;
        
        
        while(buy<=freeC)
        {
            
            mini += candies[buy];
            buy++;
            freeC -= K;
        }
        
        int maxi=0;
            buy=N-1;
            freeC = 0;
            
            
            while(freeC <= buy)
            {
                maxi += candies[buy];
                buy--;
                freeC += K;
            }
        
        
        vector<int> ans;
        
        ans.push_back(mini);
        ans.push_back(maxi);
        
        
        
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends