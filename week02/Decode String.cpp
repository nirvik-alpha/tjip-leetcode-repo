// TC - o(n)
// MC - 0(1)

class Solution {
public:
    string decodeString(string s) {
        
        stack<pair<string,int>>st;
        st.push({"",1});
        int digit = 0;
        for(auto c :s)
        {
            if(isdigit(c))
            {
                digit = digit*10 +(c-'0'); 
            }
            else if(c=='[')
            {
                st.push({"",digit});
                digit = 0;
            }
            else if(c==']'){
                    int cnt = st.top().second;
                   string str = st.top().first;
                    st.pop();
                    while(cnt--)
                    {
                        st.top().first+=str;
                    }
            }
            else{
                st.top().first.push_back(c);
            }
       
        }

        return st.top().first;








    }
};