class Solution {
public:
  vector<vector<int>> dp;
     int fn(vector<int>& piles,int i , int j){
      
        if (i ==j){
            return piles[i];
        }
        else if (dp[i][j]!=-1)return dp[i][j];
        else {
            int left = piles[i]-fn(piles,i+1,j);
            int right = piles[j]-fn(piles,i,j-1);
            dp[i][j] = max(left,right);

                return dp[i][j];
        }
     }



    
    bool stoneGame(vector<int>& piles) {
    int n=piles.size();
    dp.resize(n, vector<int>(n, -1));
     int ans = fn(piles, 0, n - 1);

      return ans >= 0;
     
    }
};