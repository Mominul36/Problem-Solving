#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) {
    map<char,int> a;
    for(int i=97;i<=122;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {
        a[s[i]]++;
    }
    int c=0;
    for(int i=97;i<=122;i++)
    {
        if(a[i]%2!=0)
        c++;
    }
    if(s.size()%2==0)
    {
        if(c==0)
        return "YES";
        else 
        return "NO";
    }
    else 
    {
        if(c==1)
        return "YES";
        else 
        return "NO";
    }
    return "abc";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
