class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int c=0;
        for(int i=0;i<words.size();i++){
            if(s[i]==words[i].at(0)) c+=1;
        }
        if(c==words.size() && words.size()==s.size()) return true;
        return false;
    }
};