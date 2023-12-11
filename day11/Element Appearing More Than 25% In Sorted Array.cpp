class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        if(arr.size()==1){
            return arr[0];
        }
        int yo=arr.size();
        int hi=(yo/4);
        int count=1;
        int lol;
        for(int j=1;j<arr.size();j++){
            if(arr[j]==arr[j-1]){
                count+=1;
                if(count>hi){
                lol=arr[j];
                break;
                }
            }
            
            else{
                count=1;
                 if(count>hi){
                lol=arr[j];
                break;
                }
            }
        }
        cout<<lol;
        return lol;

    }
};
