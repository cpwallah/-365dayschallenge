class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int check=-1;
        int maow=0;
        for(auto l:num){
            int hi=int(l)-'0';
            if(hi%2!=0){
                check=maow;
            }
            maow+=1;
        }
        if(check==-1){
            return ans;
        }
        ans=num.substr(0,check+1);
        return ans;
    }
};
