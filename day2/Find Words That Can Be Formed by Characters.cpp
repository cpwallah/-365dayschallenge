class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        vector<int>v(26,0);
        for(auto l:chars){
            v[int(l)-'a']+=1;
        }
        for(auto hi:words){
            vector<int>v1(26,0);
            for(auto maow:hi){
                 v1[int(maow)-'a']+=1;
            }
            int count=0;
            for(int j=0;j<26;j++){
                if(v[j]<v1[j]){
                    count=0;
                    break;
                }
                count=hi.size();
            }
            ans+=count;
        }
        return ans;
    }
};
