class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        for(auto l:nums){
            if(l>=max1){
                max2=max1;
                max1=l;
            }
            else if(l>max2){
                max2=l;
            }
        }
        return ((max1-1)*(max2-1));
    }
};
