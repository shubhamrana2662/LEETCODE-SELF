class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int ans =2*n;
      sort(reservedSeats.begin(),reservedSeats.end());
     for (int i = 0; i < reservedSeats.size(); ) {
int sum=2;
    int row = reservedSeats[i][0];

int left =true;
int middle =true;
int right=true;
   while (i < reservedSeats.size() &&
                   reservedSeats[i][0] == row) {

                int seat = reservedSeats[i][1];

                if (seat >= 2 && seat <= 5)
                    left = false;

                if (seat >= 4 && seat <= 7)
                    middle = false;

                if (seat >= 6 && seat <= 9)
                    right = false;

                i++;
            }


       ans -= 2;

            if (left && right)
                ans += 2;
            else if (left || middle || right)
                ans += 1;
            
        
    }
  return ans;
    }
};