#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  long and[1000000], or[1000000], xor[1000000];
  long a=0;
  for(long i=1;i<n;i++)
  {
     for(long j=i+1;j<=n;j++)
     {
         and[a]= i & j;
         or[a]= i | j;
         xor[a] = i^j;
        a++;
     }
  }
  long max1=0, max2= 0, max3=0;
  for(long i=0;i<a;i++)
  {
      if(and[i]>max1 && and[i]<k)
      max1=and[i];
      
      if(or[i]>max2 && or[i]<k)
      max2=or[i];
      
      if(xor[i]>max3 && xor[i]<k)
      max3=xor[i];
  }
  printf("%ld\n%ld\n%ld\n",max1, max2, max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
