class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        vector<int> arr(26,0);
        for(char c : word){
                
          arr[c-'a']++;
                
        }
        sort(arr.begin(),arr.end(), greater<int>());

       for(int i =0 ; i<26;i++){
             ans += arr[i] * (i / 8 + 1);
       }
return ans;
    }
};