#include<bits/stdc++.h>
using namespace std;
class burger
{
public:
  int id;
  int order;
  int p_time,s_time;
};
void fun(vector<int> a)
{
    for(auto s:a)
    cout<<s<< " ";
    cout<<endl;
}
bool cmp(burger a, burger b)
{
    if(a.s_time < b.s_time)
    return true;
    if(a.s_time > b.s_time)
    return false;
    if(a.id<b.id)
    return true;
    else 
    return false;

}
void fun(burger a[], int n)
{
   sort(a,a+n,cmp);
   for(int i=0;i<n;i++)
   {
    cout<< a[i].id << " ";
   }cout<<endl;
}
int main()
{
   int n;
   cin>>n;
   burger a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i].order>>a[i].p_time;
    a[i].id=i+1;
    a[i].s_time= a[i].order + a[i].p_time;
   }

   fun(a,n);
}
