class Solution {
public:
    int reverse(int x) {
 string s = to_string(x);
int left=0;
int right =s.size()-1;
if (x<0)left=1;

std::reverse(s.begin()+left,s.end());
long long ss=stoll(s);
if (ss > INT_MAX || ss < INT_MIN)
    return 0;

return (int)ss;
    }
};