class Solution {
public:
    int getLeastFrequentDigit(int n) {
    vector<int> arr(10,0);
    while(n/10!=0){
        arr[n%10]++;
        n/=10;
    }
      int min=0;
    arr[n]++;
  int mn = INT_MAX;
int index = -1;

for (int i = 0; i < arr.size(); i++) {
    if (arr[i] != 0 && arr[i] < mn) {
        mn = arr[i];
        index = i;
    }
}
return index;
}
    

    
};