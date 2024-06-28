class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == dividend)
            return 1;
        bool sign = true;
        if (dividend < 0 && divisor > 0) {
            sign = false;
        } else if (divisor < 0 && dividend >= 0) {
            sign = false;
        }
        long n = abs(dividend), d = abs(divisor);
        long ans = 0;
        while (n >= d) {
            int cnt = 0;
            while (n >= (d << (cnt + 1))) {
                cnt++;
            }
            ans += (1LL << cnt);
            n = n - (d << cnt);
        }

        if (!sign)
            ans = ~ans + 1;

        if (ans < INT_MIN)
            return INT_MIN;
        if (ans > INT_MAX)
            return INT_MAX;
        return ans;
    }
};