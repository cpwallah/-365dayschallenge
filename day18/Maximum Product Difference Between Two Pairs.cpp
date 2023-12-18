class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int maxi=INT_MIN;
        int maxi1=INT_MIN;
        for(auto l:nums){
            if(l>=maxi){
                maxi1=maxi;
                maxi=l;
            }
            else if(l>maxi1){
                maxi1=l;
            }
        }
        int mini=INT_MAX;
        int mini1=INT_MAX;
        for(auto hi:nums){
            if(hi<=mini){
                mini1=mini;
                mini=hi;
            }
            else if(hi<mini1){
                mini1=hi;
            }
        }
        maxi*=maxi1;
        mini*=mini1;
        return maxi-mini;
    }
};
