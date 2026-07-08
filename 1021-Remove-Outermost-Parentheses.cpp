class Solution {
public:
    string removeOuterParentheses(string s) {
      stack<char>c;
      string ans="";
      for(int i=0;i<s.length();i++){
        if(s[i]==')')c.pop();
        if(!c.empty())ans.push_back(s[i]);
        if(s[i]=='(')c.push(s[i]);
       
      }
      return ans;
    }
};