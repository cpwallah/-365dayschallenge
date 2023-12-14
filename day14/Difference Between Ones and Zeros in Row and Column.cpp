class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int>row1(grid.size(),0);
        vector<int>col1(grid[0].size(),0);
        vector<int>row2(grid.size(),0);
        vector<int>col2(grid[0].size(),0);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    row1[i]+=1;
                    col1[j]+=1;
                }
                else{
                    row2[i]+=1;
                    col2[j]+=1;
                }
            }
        }
        vector<vector<int>>ans;
        for(int x=0;x<grid.size();x++){
            vector<int>v;
            for(int y=0;y<grid[0].size();y++){
                int ansi=row1[x]+col1[y]-row2[x]-col2[y];
                v.push_back(ansi);
            }
            ans.push_back(v);
        }
        return ans;


    }
};
