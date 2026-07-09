class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())return false;
       string doubles=s+s;
       int index=doubles.find(goal);
       if(index!=string::npos){
        return true;
       }
       return false;
    }
};