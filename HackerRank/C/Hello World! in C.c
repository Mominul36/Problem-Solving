#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str1[100] = "Hello, ";
    char str2[] = "World!\n";
    strcat(str1, str2);
    

    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("%s", str1);
    printf("%s", s);

    return 0;
}
