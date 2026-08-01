class Solution {
public:
vector <vector<int>> v;

    int cpa(vector<int>&nums,int l,int r){
        if(l==r)return nums[l];
        else if (v[l][r]!=-1)return v[l][r];
        else{
        int left=nums[l]-cpa(nums,l+1,r);
        int right=nums[r]-cpa(nums,l,r-1);
        v[l][r]=max(left,right);
        return v[l][r];
        }

    }
    bool predictTheWinner(vector<int>& nums) {
        v.resize(nums.size(), vector<int>(nums.size(), -1));
        int p1=cpa(nums,0,nums.size()-1);
        return p1>=0;
        
    }
};