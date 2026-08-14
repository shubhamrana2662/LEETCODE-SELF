class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
   int first =x;
   int last=x+k-1;
   int i =y;
   while(first<last){
    swap(grid[first][i],grid[last][i]);
    if(i==y+k-1){
        i=y-1;
        first++;
        last--;}
 i++;
    }
   return grid;
    }
};