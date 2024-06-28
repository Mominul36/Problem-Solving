class Solution {
public:
   bool isPalindrome(string s) {
     string a;
     while(s.size())
     {
         if(s.front()>=97 && s.front()<=122)
            a.push_back(s.front());
         else if(s.front()>=65 && s.front()<=90)
            a.push_back(s.front()+32);
            else if(s.front()>=48 && s.front()<=57)
            a.push_back(s.front());
         s.erase(s.begin());
     }
     string b=a;
     reverse(a.begin(),a.end());
     if(a==b)
        return true;
     else 
        return false;
}
};
