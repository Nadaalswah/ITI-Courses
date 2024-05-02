#include <iostream>

using namespace std;
class point
{
    int x;
    int y;
public:
    void setx(int xx)
    {
       x=xx;
    }
     void sety(int yy)
    {
       y=yy;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

    void print()
    {
        cout <<"point (x,y)= " << "("<<x <<"," << y<< ")";
    }
};
int main()
{
    point p;
    p.setx(4);
    p.sety(7);
    cout << "x= "<< p.getx() <<"  "<< "y= " <<p.gety()<<endl;
    p.print();
    return 0;
}
