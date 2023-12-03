class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        // ans+=max(abs(points[0][0]),abs(points[0][1]));
        for(int j=1;j<points.size();j++){
            int maxi=0;
            int a,b;
           if(points[j][0]<0 && points[j-1][0]>0){
               a=abs(points[j][0])+abs(points[j-1][0]);
           }
           else if(points[j][0]>0 && points[j-1][0]<0){
               a=abs(points[j][0])+abs(points[j-1][0]);
           }
           else {
               a=abs(points[j][0]-points[j-1][0]);
           }
           

           if(points[j][1]<0 && points[j-1][1]>0){
               b=abs(points[j][1])+abs(points[j-1][1]);
           }
           else if(points[j][1]>0 && points[j-1][1]<0){
               b=abs(points[j][1])+abs(points[j-1][1]);
           }
           else{
               b=abs(points[j][1]-points[j-1][1]);
           }
           maxi=max(a,b);
            ans+=maxi;
        }
        return ans;
    }
};
