class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int>v1;
        int i =0 ; 
    
        int  j =0 ;
        
        while(i!=nums1.size()&&j!=nums2.size()){
            if (nums1[i]<nums2[j]){
                v1.push_back(nums1[i]);
                i++;
            }
            
            
            else {
                 v1.push_back(nums2[j]);
                j++;
            }
        }

        while(i!=nums1.size()){
        v1.push_back(nums1[i]);
        i++;

        }
         while(j!=nums2.size()){
        v1.push_back(nums2[j]);
        j++;

        }

        if (v1.size()%2==0)return (v1[v1.size()/2-1]+v1[v1.size()/2])/2.0;
        return v1[(v1.size()/2)];
    }
};