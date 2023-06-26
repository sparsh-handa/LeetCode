class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.length();
        stack<string> st;
        
       for(int i=0;i<n;i++)
       {
           string ans;
           if(s[i]==' ') continue;
           while(s[i]!=' ' && i<n)
       {
           ans = ans + s[i];
           i++;
       }
        
       st.push(ans);
           
       }    
       
        
        string finalAns;
        
        while(!st.empty())
        {
           finalAns += st.top();
            st.pop();
            if (!st.empty()) {
                finalAns += ' ';
            }
        }
        
        return finalAns;
    }
};
