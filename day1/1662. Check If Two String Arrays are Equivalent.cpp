class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a,b;
        for(auto l:word1){
            a+=l;
        }
        for(auto hi:word2){
            b+=hi;
        }
        if(a==b){
            return true;
        }
        return false;
    }
};
