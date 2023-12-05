class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        while(n!=1){
            sum+=(n/2);
            if(n%2==0){
                n/=2;
            }
            else{
                n/=2;
                n+=1;
            }
        }
        return sum;
    }
};
