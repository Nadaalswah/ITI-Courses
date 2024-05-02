#include <iostream>

using namespace std;
class Complex_num
{
    int real;
    int img ;

    public:
    Complex_num()
    {
      real=0;
      img=0;
    }

    {
      real=_real;
      img =_img;
    }
    void setReal(int _real)
    {
        real=_real;
    }
     void setImg(int _img)
    {
        img=_img;
    }

    int getReal()
    {
        return real;
    }

    int getImg()
    {
        return img;
    }

   Complex_num add (Complex_num c)
   {
    Complex_num res;
    res.real=c.real+real;
    res.img=c.img +img ;
    return res;
   }

    void print()
    {
        if (img >0)
            cout<< endl <<"numbre = "<<real << "+"<< img << "J";
        else if (img < 0)
            cout<<  endl <<"numbre = "<< real << img << "J";
        else
            cout<<  endl <<"numbre = "<< real ;
    }


};

Complex_num Add (Complex_num c1,Complex_num c2) ;

Complex_num Add (Complex_num c1,Complex_num c2)
{
    Complex_num res;
    res.setReal(c1.getReal()+c2.getReal());
    res.setImg(c1.getImg()+c2.getImg());
    return res;
}

int main()
{
   Complex_num c1,c2,c3 ,c4 ,c5;

   c1.print();

   c2.setReal(5);
   c2.setImg(4);
   c2.print();

   c3.setReal(7);
   c3.setImg(-6);
   c3.print();

   c4.setReal(10);
   c4.add(c2);
   // Add(c2,c3);
   c5= Add(c2,c3);
   c5.print();


    return 0;
}
