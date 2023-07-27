//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int minAns = INT_MAX;
    	int maxAns = INT_MIN;
    	
    	for(int i=0;i<N;i++)
    	{
    	    if(A[i]<minAns)
    	    {
    	        minAns = min(minAns,A[i]);
    	    }
    	    
    	    if(A[i]>maxAns)
    	    {
    	        maxAns = max(maxAns,A[i]);
    	    }
    	    
    	    
    	}
    	
    	int ans  = minAns + maxAns;
    	return ans;
    	
    	
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends