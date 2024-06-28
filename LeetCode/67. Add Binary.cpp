class Solution {
public:
    int onecount(char a, char b, char c)
{
    string s;
    s.push_back(a);
    s.push_back(b);
    s.push_back(c);
    return count(s.begin(),s.end(),'1');
}

string addBinary(string a, string b)
{
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if(a.size()<b.size())
        swap(a,b);
    int m=a.size(),n=b.size(),i;
   char car='0';
    for( i=0;i<n;i++)
    {
       if(onecount(a[i],b[i],car)==0);
       else if(onecount(a[i],b[i],car)==1)
       {
           a[i]='1';
           car='0';
       }
       else if(onecount(a[i],b[i],car)==2)
       {
           a[i]='0';
           car='1';
       }
       else if(onecount(a[i],b[i],car)==3)
       {
           a[i]='1';
           car='1';
       }

    }
    while(i<m)
    {
        if(onecount(a[i],'0',car)==0);
       else if(onecount(a[i],'0',car)==1)
       {
           a[i]='1';
           car='0';
       }
       else if(onecount(a[i],'0',car)==2)
       {
           a[i]='0';
           car='1';
       }
       i++;
    }
    if(car=='1')
        a.push_back('1');
    reverse(a.begin(),a.end());
    return a;

}
};
