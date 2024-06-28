#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,d,c;
    char a[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        d=strlen(a);
        c=a[d-1]-48;
        if(c%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}