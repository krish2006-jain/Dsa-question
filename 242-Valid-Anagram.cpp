class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<int,int>mp;
        for(char sc:s){
            mp[sc]++;
        }
        for(char st:t){
            mp[st]--;
        }
        for(auto it:mp){
            if(it.second!=0)return false;
        }
        return true;
    }
};