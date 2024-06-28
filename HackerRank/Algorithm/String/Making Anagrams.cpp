#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int makingAnagrams(string s1, string s2) {
    map<char,int> a;
    map<char,int> b;
    for(int i=97;i<=122;i++)
    {
        a[i]=0; b[i]=0;
    }
    
    for(int i=0;i<s1.size();i++)
    {
        a[s1[i]]++;
    }
    
    for(int i=0;i<s2.size();i++)
    {
        b[s2[i]]++;
    }
    
    int c=0;
    for(int i=97;i<=122;i++)
    {
       c+= abs(a[i]-b[i]);
    }
   return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
