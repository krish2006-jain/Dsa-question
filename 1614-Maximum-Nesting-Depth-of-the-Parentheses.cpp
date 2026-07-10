class Solution {
public:
    int maxDepth(string s) {
        int maxx=0;
        int uppara=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                uppara++;
                
            }
            else if(s[i]==')'){
                maxx=max(maxx,uppara);
                uppara--;
            }
            else{
                continue;
            }
        }
        return maxx;
    }
};