// TC - o(n)
// MC - o(n)
class Solution {
public:
    bool isValid(string s) {
    
        stack<int>st;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else{
                if(st.empty())
                    return false;
                    //st.pop();

                if((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') ||(s[i]==']' && st.top()=='['))
                {
                    st.pop();
                }
                else
                    return false;

            }
            
        }
        
        if(st.empty())
            return true;
        else
            return false;
        
        
        
        
        
        
    }
};