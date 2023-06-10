//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
private:
    void nextSmallerElement(vector<long long>& arr, int n, vector<int>& ans) {
        stack<int> s;
        s.push(-1);
        ans.reserve(n);

        for(int i = n - 1; i >= 0; i--) {
            long long curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
    }
    
    void prevSmallerElement(vector<long long>& arr, int n, vector<int>& ans) {
        stack<int> s;
        s.push(-1);
        ans.reserve(n);

        for(int i = 0; i < n; i++) {
            long long curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
    }
    
public:
    long long getMaxArea(long long arr[], int n) {
        vector<long long> heights(arr, arr + n); // Convert array to vector
        vector<int> next(n);
        nextSmallerElement(heights, n, next);
            
        vector<int> prev(n);
        prevSmallerElement(heights, n, prev);
        
        long long area = LLONG_MIN; // Use LLONG_MIN instead of INT_MIN
        for(int i = 0; i < n; i++) {
            long long l = heights[i];
            
            if(next[i] == -1) {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            long long newArea = l * b;
            area = max(area, newArea);
        }
        return area;
    }
};



//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends