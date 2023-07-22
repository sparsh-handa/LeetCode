//{ Driver Code Starts
//Initial Template for C++

// CPP program for implementation of efficient 
// approach to find length of last word 
#include <bits/stdc++.h> 
using namespace std; 

int findLength(string s);

// Driver code 
int main() 
{ 
	int t;
	cin>>t;
	t+=1;
	bool flag = false;
	while(t--){
	    string s;
	    getline(cin,s);
	    if(!flag){
	        flag = true;
	        continue;
	    }
	    cout<<findLength(s)<<endl;
	}
	return 0;
} 

// } Driver Code Ends


//User function Template for C++

int findLength(string s){
        
        int n = s.length();
        int ans = 0;
        
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ' && ans >0)
            {
                return ans;
            }
            
            if(s[i]!=' ')
            {
                ans++;
            }
        }
        return ans;
    
}