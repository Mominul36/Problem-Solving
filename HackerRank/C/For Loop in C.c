#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  
      for(int i=a;i<=b;i++)
      {
          if(i>=1 && i<=9)
          {
              switch(i)
              {
                  case 1:
                  printf("one\n");
                    //printf("one\n");// cout<< "one"<<endl;
                     break;
                  case 2:
                     printf("two\n");//cout<< "two"<<endl;
                     break;
                  case 3:
                    printf("three\n"); //cout<< "three"<<endl;
                     break;
                    case 4:
                     printf("four\n");//cout<< "four"<<endl;
                     break;
                    case 5:
                     printf("five\n");//cout<< "five"<<endl;
                     break;
                    case 6:
                     printf("six\n");//cout<< "six"<<endl;
                     break;
                    case 7:
                     printf("seven\n");//cout<< "seven"<<endl;
                     break;
                    case 8:
                     printf("eight\n");//cout<< "eight"<<endl;
                     break;
                    case 9:
                     printf("nine\n");//cout<< "nine"<<endl;
                     break;
              }
          }
          else if(i%2==0)
          printf("even\n");//cout<< "even"<<endl;
          else 
          printf("odd\n");//cout<< "odd"<<endl;
      }

    return 0;
}

