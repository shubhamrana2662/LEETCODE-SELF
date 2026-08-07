class Solution {
public:
    int reverse(int x) {
        int k =0;
        if(x==INT_MIN){return 0;}
        if(x<0){
            x = x*(-1);
            while(x>0){
                if(k>(INT_MAX - x%10)/10){return 0;}
                k = k*10 + x%10;
                x = x/10;
            }
            return (-1)*k;
        }
        else{
        while(x>0){
            if(k>(INT_MAX - x%10)/10){return 0;}
            k = k*10 + x%10;
            x = x/10;
        }
        return k;
        }
        
    }
};