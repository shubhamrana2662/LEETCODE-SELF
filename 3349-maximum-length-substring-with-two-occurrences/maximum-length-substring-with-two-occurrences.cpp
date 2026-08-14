class Solution {
public:
    int maximumLengthSubstring(string s) {
    vector <int>arr(26,0);
    int left =0;
    int right =0;
    
    int max1=0;
    while(right<s.size()){
       arr[s[right]-97]++;
     
        while(arr[s[right]-97]>2){
      arr[s[left]-97]--;
      left++;
       }

       
       right++;
      
max1 = max(right-left,max1);
    }
    return max1;
    }
};