class Solution {
public:
vector <vector<int>> v;

    int cpa(vector<int>& arr,int l,int r){
        if(l==r)return arr[l];
        else if (v[l][r]!=-1)return v[l][r];
        else{
        int left=arr[l]-cpa(arr,l+1,r);
        int right=arr[r]-cpa(arr,l,r-1);
        v[l][r]=max(left,right);
        return v[l][r];
        }

    }
    bool predictTheWinner(vector<int>& nums) {
        v.resize(nums.size(), vector<int>(nums.size(), -1));
        int p1=cpa(nums,0,nums.size()-1);
        if(p1>=0)return true;
        return false;
        
    }
};