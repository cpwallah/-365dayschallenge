class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
          unordered_map<string,int>m;
          for(auto l:paths){
              m[l[0]]=1;
          } 
          for(auto hi:paths){
              if(m[hi[1]]!=1){
                  return hi[1];
              }
          }
          return "";
    }
};
