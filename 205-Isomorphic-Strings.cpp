class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s1[256]={0};
        int s2[256]={0};
        for(int i=0;i<s.length();i++){
            if(s1[s[i]]!=s2[t[i]]){
                return false;
            }
            s1[s[i]]=i+2;
            s2[t[i]]=i+2;        }
            return true;
    }

};