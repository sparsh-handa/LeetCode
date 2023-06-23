class Solution {
public:
   string removeKdigits(string num, int k) {
        string str="";
        stack<char>st;
        int i=0,count=0;
        if(num.size()==k)
        { 
            return "0";
        }
       while(i<num.size())
       {
           if(st.empty())
           {
               st.push(num[i]);
               i++;
               continue;
           }
           while((!st.empty() && k>0))
           {
               if(st.top()>num[i]){//if top element is greater than the incoming then we are removing the top element;
               st.pop();
               k--;
               }
               else 
               break;
           }
           st.push(num[i]);
           i++;
       }
       while(k--)//this is the loop if k remains greater than zero then in that case the top elements are greater than the bottom ones;
       {
       st.pop();
       }
       while(!st.empty())
        {
            str.push_back(st.top());//push the stack elements into the string
            st.pop();
        }
        
        reverse(str.begin(), str.end());//reversing to get the lowest number
        
        while(!str.empty()&& str[0] == '0')//removing zeros if there are any
            str.erase(str.begin());
        
        if(str.empty())
            return "0";
        
        return str;
    }
};