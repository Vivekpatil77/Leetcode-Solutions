class Solution {
public:
    int reverse(long x) {
        long y = 0;
        long z = 0;
        if(x < 0){
            z = -x;
        }
        else
        z = x;
        while(z)
        {
            int r = 0;
            r = z%10;
            y = y*10+r;
            z = z/10;
        }
        if (y> INT_MAX)
        {
            return 0;
        }
        if (x < 0){
            return -y;
        }
        else {
            return y;
        }
    }
};