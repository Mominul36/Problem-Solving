
  int marks_summation(int *a,int n,char ch)
 {
     int sum=0;
     if(ch=='b')
     {
        for(int i=0;i<n;i++)
         {
             if(i%2==0)
             sum+=*(a+i);
         }
      }
      else if(ch=='g')
     {
        for(int i=0;i<n;i++)
         {
             if(i%2!=0)
             sum+=*(a+i);
         }
      }
      return sum;

 }

