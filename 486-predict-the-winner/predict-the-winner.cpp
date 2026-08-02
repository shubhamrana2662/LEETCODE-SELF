class Solution {
public:
  vector<vector<int>> dp;
     int fn(vector<int>& nums,int i , int j){
      
        if (i ==j){
            return nums[i];
        }
        else if (dp[i][j]!=-1)return dp[i][j];
        else {
            int left = nums[i]-fn(nums,i+1,j);
            int right = nums[j]-fn(nums,i,j-1);
            dp[i][j] = max(left,right);

                return dp[i][j];
        }
     }



    
    bool predictTheWinner(vector<int>& nums) {
int n=nums.size();
int ans;
if (n%2==0)return true;
else{
dp.resize(n, vector<int>(n, -1));
 ans = fn(nums, 0, n - 1);
}
return ans >= 0;
     
    }
};