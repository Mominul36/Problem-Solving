#include<bits/stdc++.h>
using namespace std;

vector<int> parseInts(string s) {
    vector<int> v;
    int x;
    char c;
    istringstream var(s);
    while(var>>x)
    {
        v.push_back(x);
        var>>c;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
