class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int>row(mat.size(),0);
        vector<int>col(mat[0].size(),0);
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    row[i]+=1;
                    col[j]+=1;
                }
            }
        }
        int ans=0;
        for(int x=0;x<mat.size();x++){
            for(int y=0;y<mat[0].size();y++){
                if(mat[x][y]==1){
                    if(row[x]==1 && col[y]==1){
                        ans+=1;
                    }
                }
            }
        }
        return ans;
        
    }
};
