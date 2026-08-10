class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int t=0;
        if(strs.size()==1)return strs[0];
       while(!strs[0].empty()){
     for(int i = 1 ; i<strs.size();i++){
        if(strs[0]!=strs[i].substr(0,strs[0].size())){
            t=1;
           break;
            
        }else if (i==strs.size()-1){
            return strs[0];
        }

     }
     strs[0].pop_back();
       }
       

              return strs[0];   
    }
};