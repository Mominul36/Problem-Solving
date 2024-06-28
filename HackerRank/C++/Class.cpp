#include<bits/stdc++.h>
using namespace std;

class Student
{
     public:
    int age,standard;
    string first_name, last_name;

    void set_age(int a)
    {
        age=a;
    }
    void set_standard(int s)
    {
        standard=s;
    }
    void set_first_name(string fn)
    {
        first_name=fn;
    }
    void set_last_name(string ln)
    {
        last_name=ln;
    }
    void get_age()
    {
        cout<<age;
    }
    void get_first_name()
    {
        cout<<first_name;
    }
    void get_last_name()
    {
        cout<<last_name;
    }
    void get_standard()
    {
        cout<<standard;
    }
    void to_string()
    {
        cout<< age<< ","<<first_name<< ","<<last_name<< ","<<standard<<endl;
    }
};
int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
   st.get_age();
    cout << endl;
    st.get_last_name();
    cout << ", " ;
    st.get_first_name() ;
    cout<< "\n";
    st.get_standard();
    cout << "\n";
    cout << "\n";
    st.to_string();

    return 0;
}
