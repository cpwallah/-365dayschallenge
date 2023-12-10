class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       vector<vector<int>>ans;
       for(int j=0;j<matrix[0].size();j++){
           vector<int>v;
           for(int k=0;k<matrix.size();k++){
            v.push_back(matrix[k][j]);
           }
           ans.push_back(v);
       }
       return ans; 

    }
    
};
