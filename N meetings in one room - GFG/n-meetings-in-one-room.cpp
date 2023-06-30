//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
            
            pair<int,int> meeting[n];
            
            for(int i=0;i<n;i++)
            {
                meeting[i] = make_pair(end[i],start[i]);
            }
            
            sort(meeting,meeting+n);
            int count=1;
            
            int endTime = meeting[0].first;
            
            for(int i=1;i<n;i++)
            {
                if(meeting[i].second>endTime)
                {
                    count++;
                    endTime = meeting[i].first;
                }
            }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends