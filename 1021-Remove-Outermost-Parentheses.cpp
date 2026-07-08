##method 1 using stack  time :-0(n) space(n)
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
## method 2 using counter time -0(n)  space(1)
class Solution {
public:
    string removeOuterParentheses(string s) {
      int counter=0;
      string ans="";
      for(int i=0;i<s.length();i++){
        if(s[i]==')')counter--;
        if(counter!=0)ans.push_back(s[i]);
        if(s[i]=='(')counter++;
       
      }
      return ans;
    }
};
