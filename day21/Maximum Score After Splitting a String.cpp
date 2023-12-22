class Solution {
public:
    int maxScore(string s) {
        int maxi=INT_MIN;
        int temp1=0;
        int temp2=0;
        for(auto l:s){
            if(l=='1'){
                temp2+=1;
            }
        }
        int i=0;
        while(i<s.size()-1){
            if(s[i]=='1'){
                temp2-=1;
            }
            else{
                temp1+=1;
            }
            maxi=max(temp1+temp2,maxi);
            i+=1;
        }
        return maxi;

    }
};
