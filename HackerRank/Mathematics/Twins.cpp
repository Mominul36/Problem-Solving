#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert> 
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int lst = -1;
    int ans = 0;
    vector<int> primes;
    //checking all primes till 10^9
    for (int i = 2; i*i <= 1E9; i++) {
        bool ok = true;
        for (int j = 2; j*j <= i; j++) { 
            if (i % j == 0) { 
               ok = false; 
               break; 
            } 
        } 
        if (ok && i > 1) {
            primes.push_back(i);
        }
    }
    // starting from N to M and checking through all the number stored in vector Primes
    for (int i = n; i <= m; i++) {
        bool ok = true;
        for (int j = 0; j < primes.size() && primes[j]*primes[j] <= i; j++) { 
            if (i % primes[j] == 0) { 
               ok = false; break; 
            } 
         } 
         if (ok && i > 1) {
            ans += (lst == i - 2);
            lst = i;
        }
    }
    cout << ans << endl;
    return 0;
}
