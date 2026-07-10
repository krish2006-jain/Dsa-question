class Solution {
public:
    string frequencySort(string s) { 
        unordered_map<char,int>mp;
        for(char cs:s){
            mp[cs]++;
        }
        vector<pair<char,int>>vc(mp.begin(),mp.end());
        sort(vc.begin(),vc.end(),[](const pair< char ,int >&a,const pair<char, int>&b){return a.second >b.second;} );
        string name="";
        for(auto it :vc){
            name+=string(it.second,it.first);
        }
        return name;
    }
};