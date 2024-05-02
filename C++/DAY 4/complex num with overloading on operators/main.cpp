#include <iostream>

using namespace std;
class Complex_num
{
    int real;
    int img ;

    public:
    //---------------------------sets---------------------

    void setReal(int _real)
    {
        real=_real;
    }

     void setImg(int _img)
    {
        img=_img;
    }
    void setComplex (int _real, int _img)
    {
        real=_real;
        img= _img;
    }

    //------------------------gets--------------------------
     int getReal()
    {
        return real;
    }

    int getImg()
    {
        return img;
    }
    //-----------------------constructors-------------------
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
    //-----------------------operators overloading---------------


   Complex_num operator+(Complex_num const & c)    //+

   {

    Complex_num res;
    res.real=c.real+real;
    res.img=c.img +img ;
    return res;
   }
   Complex_num operator-(Complex_num const &c)    //-
   {
        Complex_num res;
        res.real=real-c.real;
        res.img=img-c.img;
        return res;
   }

   Complex_num operator+(int r)                //+
   {
      Complex_num res(real+r,img) ;
      return res;
   }

   int operator == (Complex_num c)             //==
   {
       return real== c.real && img==c.img ;
   }

   int operator != (Complex_num c )            // !=
   {
       return !(*this == c);
   }

   Complex_num & operator += (Complex_num c)    //+=
   {
       real=real+c.real;
       img=img+c.img;
       return *this;
   }

    Complex_num & operator -= (Complex_num c)    //-=
   {
       real=real-c.real;
       img=img-c.img;
       return *this;
   }

    Complex_num operator ++ (int)        // prefix
    {
      Complex_num res (real, img)  ;
     // Complex_num res (*this);
     // Complex_num res = *this;
      real++;
      return res ;
    }

     Complex_num operator ++ ( )     // postfix
    {
      real++;
      return *this ;
    }

    explicit operator int()      // casting int
    {
        return real;
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
   Complex_num c1,c2,c3 ,c4 ,c5 ,c6 ;
   c1.setComplex(10,5);
   c1.print();

   c2.setReal(5);
   c2.setImg(4);


   c3.setReal(7);
   c3.setImg(-6);


   c4=c2+c3;
   c4.print();

   c5=10+c4;
   c5.print();

   c1=c3+10;
   c1.print();

   c6+=c4+=c5;
   c6.print();
   if (c6==c4)
     cout<< endl <<"equal";
   if (c2!=c6)
     cout<< endl <<"not equal";
   c6++;
   c6.print();
   ++c6;
   c6.print();
   int x=(int)c6;
   cout << endl<< "x= "<< x;
    c6+=c4-=c5;
   c6.print();

   c4=c2-c3;
   c4.print();

    return 0;
}
