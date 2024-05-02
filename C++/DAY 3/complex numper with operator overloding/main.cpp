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


      Complex_num(int _real ,int _img)
    {
      real=_real;
      img =_img;
    }

      Complex_num(int num)
    {
      real=num;
      img =0;
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



   Complex_num operator+(Complex_num const & c)
   {

    Complex_num res;
    res.real=c.real+real;
    res.img=c.img +img ;
    return res;
   }

   Complex_num operator+(int r)
   {
      Complex_num res(real+r,img) ;
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

 Complex_num operator+(int r,Complex_num &c)
   {

      return c+r;
   }


int main()
{
   Complex_num c1,c2,c3 ,c4 ,c5;

   c1.print();

   c2.setReal(5);
   c2.setImg(4);


   c3.setReal(7);
   c3.setImg(-6);


   c4=c2+c3;
   c4.print();

   c5=10+c4;         //stand alone
   c5.print();

   c1=c3+10;
   c1.print();

    return 0;
}
