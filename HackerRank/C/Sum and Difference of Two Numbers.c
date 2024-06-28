#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   int a,b,c;
   float m,n,o;
   scanf("%d %d",&a,&b);
   scanf("%f %f",&m,&n);
   c=(a-b);
   o=(m-n);
   printf("%d %d\n",a+b,c);
   
   printf("%.1f %.1f\n",m+n,o);

return 0;
}
