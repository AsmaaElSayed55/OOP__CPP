#include <bits/stdc++.h>
#define loop_i(start,end) for(ll i=start;i<end;i++)
#define ll long long
#define el '\n'
using namespace std;
class Student{
    private:
    string first_name,last_name;
    int age,standard;
    public:
    void set_age(int a)
    {
      age=a;
    }
    void set_first_name(string s)
    {
      first_name=s;
    }
    void set_last_name(string l)
    {
      last_name=l;
    }
    void set_standard(int st)
    {
      standard=st;
    }
    void print()
    {
        cout<<age<<el;
        cout<<last_name<<", "<<first_name<<el;
        cout<<standard<<el<<el;
        cout<<age<<","<<first_name<<","<<last_name<<","<<standard<<el;
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

    st.print();

    return 0;
}
