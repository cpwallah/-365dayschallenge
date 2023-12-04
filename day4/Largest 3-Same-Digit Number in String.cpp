class Solution {
   
public:
   //itna bekaar solution likha khudh sai shit i fucked up space complexity  and a little bit time complexity
    string largestGoodInteger(string num) {
    //     set<char>s;
    //     deque<char>dq;
    //     vector<int>v;
    //     dq.push_back(num[0]);
    //      dq.push_back(num[1]);
    //       dq.push_back(num[2]);
          
    //    s.insert(num[0]);
    //      s.insert(num[1]);
    //      s.insert(num[2]);
    //      if(s.size()==1){
    //          int ans=int(num[0])-'0';
    //         v.push_back(ans);
    //      }

    //     for(int j=3;j<num.size();j++){
    //         dq.pop_front();
    //         dq.push_back(num[j]);
    //         set<char>maow;
    //         deque<char>dq1;
    //         while(!dq.empty()){
    //             maow.insert(dq.front());
    //             dq1.push_back(dq.front());
    //             dq.pop_front();
    //         }
    //         if(maow.size()==1){
    //             int trap=int(dq1.front())-'0';
    //             v.push_back(trap);
    //         }
    //         while(!dq1.empty()){
    //             dq.push_back(dq1.front());
    //             dq1.pop_front();
    //         }
    //     }
    //     sort(v.rbegin(),v.rend());
    //     if(v.size()==0){
    //         return "";
    //     }
    //     string total="";
    //     total+=to_string(v[0]);
    //     total+=to_string(v[0]);
    //     total+=to_string(v[0]);
    //     return total;
    int ans=-1;
    for(int j=2;j<num.size();j++){
        if(num[j]==num[j-1] && num[j-1]==num[j-2]){
            int trap=int(num[j])-'0';
            ans=max(trap,ans);
        }
    }
    if(ans==-1){
    return "";
    }  
    string temp="";
    temp+=to_string(ans);
    temp+=to_string(ans);
    temp+=to_string(ans);
    return temp;
    }
};
