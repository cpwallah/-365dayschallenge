class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int row=img.size();
        int col=img[0].size();
        vector<vector<int>>mat(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int total=0;
                int count=0;
                for(int l=max(0,i-1);l<min(row,i+2);l++){
                    for(int k=max(0,j-1);k<min(col,j+2);k++){
                        total+=img[l][k];
                        count+=1;
                    }
                }
                 mat[i][j]=total/count;
            }
           
        }
        return mat;
    }
};
