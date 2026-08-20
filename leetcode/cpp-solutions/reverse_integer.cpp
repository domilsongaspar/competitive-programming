#include <climits>

class Solution {
public:
    int reverse(int x) {
        int n = 0, sig = 1;
        long int test_overflow = 0;
        
        if (x == INT_MIN)
            return (0);
        if (x < 0)
        {
            sig = -1;
            x = -x;
        }
        while (x > 0)
        {
            test_overflow = test_overflow * 10 + x % 10;
            if (test_overflow > INT_MAX)
                return (0);
            n = n * 10 + x % 10;
            x /= 10;
        }
        return (n * sig);
    }
};