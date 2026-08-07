class Solution {


public:
 vector<int>v=vector<int>(46, -1);;
int fn(int n){

    if (n<=3){
        return n;

    }else if (v[n]>-1)return v[n];
    else {
        v[n]=fn(n-1)+fn(n-2);
       return v[n];
    }
}

    int climbStairs(int n) {
      
          
       return fn(n);
    }
};