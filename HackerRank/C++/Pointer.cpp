#include<bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    int m,n;
    m=*a;
    n=*b;
    *a=m+n;
    *b=abs(m-n);   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
