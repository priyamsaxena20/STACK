C++
class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        int i=0;
        stack<char> st;
        while(i<n){
            if(st.empty()||st.top()!=s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
            i++;
         
        

        }
        string ans="";
        while(!st.empty()){
            char element=st.top();
            st.pop();
            ans=ans+element;
        }
        reverse(ans.begin(),ans.end());
        return ans;


        
    }
};
