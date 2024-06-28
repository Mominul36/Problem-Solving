#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  long long int aa[20],i,result;
  aa[0]=a;
  aa[1]=b;
  aa[2]=c;
  
  for(i=0;i<n;i++)
  {
      if(i!=0 && i!=1 && i!=2)
      aa[i]=aa[i-1]+aa[i-2]+aa[i-3];
      
      result=aa[i];
  }
  return result;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
