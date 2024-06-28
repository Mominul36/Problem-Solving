#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'anagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int anagram(string s) {
    if(s.size()%2!=0)
    return -1;
    
    int len=s.size();
    string ss,sss;
    
    for(int i=0;i<len/2;i++)
    {
        ss.push_back(s[i]);
    }
    for(int i=len/2;i<len;i++)
    {
        sss.push_back(s[i]);
    }
    
   map<char,int> a,b;
   for(int i=65;i<=122;i++)
   {
       a[i]=0;
       b[i]=0;
   }
   for(int i=0;i<ss.size();i++)
   {
       a[ss[i]]++;
       b[sss[i]]++;
   }
   
   int c=0;
   for(int i=97;i<=122;i++)
   {
       c+= abs(a[i]-b[i]);
   }
   return c/2;
   
    
    
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
