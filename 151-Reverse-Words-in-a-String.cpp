class Solution {
public:
    string reverseWords(string s) {
    reverse(s.begin(),s.end());
    int n=s.size();
    string orignal="";
    for(int i=0;i<n;i++){
       string newname="";
       while(i<n && s[i]!=' '){
        newname+=s[i];
        i++;
       }
       reverse(newname.begin(),newname.end());
       if(newname.length()>0){
        orignal+=" "+newname;
       }
    }
    return orignal.substr(1);
    }
};