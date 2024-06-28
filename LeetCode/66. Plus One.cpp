class Solution {
public:
    vector<int> plusOne(vector<int>& a)
{
  vector<int> c;
  reverse(a.begin(),a.end());
  //print(a);
 int car=1;
 for(int i=0;i<=a.size();i++)
 {
     if(i==a.size() && car==0 )
        break;
     if(i==a.size() && car!=0){
        c.push_back(car);
        break;
     }
     c.push_back((a[i]+car)%10);
     car=(a[i]+car)/10;
    // a.erase(a.begin());
 }
 reverse(c.begin(),c.end());
 return c;
}
};
