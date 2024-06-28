class Solution {
public:
    int xorOneToN(int n) {
        if (n % 4 == 1)
            return 1;
        if (n % 4 == 2)
            return n + 1;
        if (n % 4 == 3)
            return 0;
        if (n % 4 == 0)
            return n;
        return 0;
    }
    int missingNumber(vector<int>& a) {
        int xo = 0;
        for (int i = 0; i < a.size(); i++) {
            xo = xo ^ a[i];
        }
        int xo2 = xorOneToN(a.size());
        return (xo ^ xo2);
    }
};