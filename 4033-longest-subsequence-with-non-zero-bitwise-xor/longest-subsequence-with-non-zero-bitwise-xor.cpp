class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        int t=0;
       for(int n :nums){
          x^=n;
          if(n==0)t++;
       }
     
     if(t==nums.size())return 0;
      if(x==0){
        return nums.size()-1;
       }
       return nums.size();
    }
};