#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    string c=a;
    cout<< a.length()<< " "<<b.length()<<endl;
    c.append(b);
    cout<< c<<endl;
    swap(a.front(),b.front());
    cout<< a<< " "<<b<<endl;
  
    return 0;
}
