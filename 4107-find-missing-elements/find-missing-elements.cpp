class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=0;
        vector<int >v;
        for(int i =nums[0];i<=nums[nums.size()-1];i++){
            if(nums[n]!=i){
                v.push_back(i);
            }else{
                n++;
            }
        }
        return v;
    }
};