#include <bits/stdc++.h>
using namespace std;

class Rectangle{
protected:
    int width,height;
public:
    void read_input()
    {
        cin>>width>> height;
    }
    void display()
    {
        cout<<width<<" "<<height<<"\n";
    }
};
class RectangleArea:public Rectangle{
public:
    void display()
    {
        int area=width*height;
        cout<<area<<"\n";
    }

};
int main()
{
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();

    return 0;
}