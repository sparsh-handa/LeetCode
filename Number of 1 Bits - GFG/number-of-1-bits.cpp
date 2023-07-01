//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        int binaryNum[32];
        int i = 0;
        
        while (N > 0) {
            binaryNum[i] = N % 2;
            N = N / 2;
            i++;
        }
        
        int count = 0;
        
        for (int j = i - 1; j >= 0; j--) {
            if (binaryNum[j] == 1) {
                count++;
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
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends