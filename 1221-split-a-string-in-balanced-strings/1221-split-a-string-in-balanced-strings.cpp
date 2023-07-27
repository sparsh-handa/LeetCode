class Solution {
public:
    int balancedStringSplit(string s) {
        
        int countL=0;
        int countR=0;
        int count = 0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
            {
                countL++;
            }
            else if(s[i]=='R')
            {
                countR++;
            }
            
            if(countL==countR)
            {
                count++;
            }
        }
        
        return count;
    }
};