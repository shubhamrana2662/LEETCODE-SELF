class Solution {
public:
    int smallestNumber(int n, int t) {
        int i =10;
        
        for(int i =n ;i<=n+10;i++){
            if(i>=10){
            if(((i/10)*(i%10))%t==0){
                return i;
            }}
            else if(i<10){
                if(i%t==0){
                return i;
            }
        }}
        return n;
    }
};