class Solution {
public:
    int alternateDigitSum(int n) {
     long long sum=0;
     vector<int> a;
     while(n)
     {
         a.push_back(n%10);
         n/=10;
     }
     reverse(a.begin(),a.end());
     for(int i=0;i<a.size();i++)
     {
         if(i%2==0)
            sum=sum+a[i];
         else
            sum=sum-a[i];
     }
     return sum;

}
};
