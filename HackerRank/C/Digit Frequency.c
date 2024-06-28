#include<stdio.h>
int main()
{
    char a[1000],b[]={"0123456789"};
    int i,j;
    gets(a);

    for(i=0;i<10;i++)
    {
        int c=0;
        for(j=0;j<strlen(a);j++)
        {
            if(b[i]==a[j])
                c++;
        }
        printf("%d ",c);
    }

}
