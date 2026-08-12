class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=*max_element(nums.begin(),nums.end());
       unordered_map<int,int>arr;
       vector<int>sum1;
       int left =0 ; 
       int sum=0;
        for (int i =0 ; i<nums.size();i++){
            arr[nums[i]]++;
            
            
                
                while (arr[nums[i]]>k){
                     arr[nums[left]]--;
                     left++;
                
            }
            sum = max(sum, i - left + 1);
        }
        return sum;
    }
};