#include<bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int aa[4];
    aa[0]=a;
    aa[1]=b;
    aa[2]=c;
    aa[3]=d;
    sort(aa,aa+4);
    return aa[3];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
