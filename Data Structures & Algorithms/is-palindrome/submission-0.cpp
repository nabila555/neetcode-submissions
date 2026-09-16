class Solution {
public:
    bool isPalindrome(string s) {

        string st="";
 for(char c:s){
    if(isalnum(c)){
        st+=tolower(c);
    }
 }

 string rs=st;
  reverse(st.begin(),st.end());

if(st==rs) return true;
else return false;
        
    }
};
