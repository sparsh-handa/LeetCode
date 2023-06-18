// class Solution {
// public:
//     int countAsterisks(string s) {
//         int ans = 0;
//         int brace = 0;
//         for(int i=0;i<s.length();i++){
//             if(s[i]=='|' && brace!=1) brace=1;
//             else if(s[i]=='*' && brace!=1) ans++;
//             else if(s[i]=='|' && brace==1) brace=0;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int countAsterisks(string s) {
	
	 int ans=0;
	 
	// count of no. of '|'
        int cnt=0;
		
        for(int i=0;i<s.size() ;i++) {
		
              if(cnt%2==0) {
                  if(s[i]=='*') ans++;
              }
              if(s[i]=='|') cnt++;
        }
        return ans;
    }
};