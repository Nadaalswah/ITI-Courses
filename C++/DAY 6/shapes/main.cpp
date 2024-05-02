#include <iostream>

using namespace std;

class shape
{
    protected:
    int dim1;
    int dim2;

    public:
    void setDim1(int _dim1)
    {
        dim1=_dim1;
    }
     void setDim2(int _dim2)
    {
        dim2=_dim2;
    }

    int getDim1 ()
    {
        return dim1;
    }

     int getDim2 ()
    {
        return dim2;
    }

    shape()
    {
        dim1=dim2=1;
    }

     shape(int dim)
    {
        dim1=dim2=dim;
    }
     shape(int _dim1,int _dim2)
    {
        dim1=_dim1;
        dim2=_dim2;
    }

    void print()
    {
        cout << endl<< "("<< dim1 <<"," << dim2 << ")" ;
    }
};

class Rect : public shape
{
 public:
 Rect(){}
 Rect (int dim):shape(dim){}
 Rect (int _dim1 , int _dim2):shape(_dim1 ,_dim2){}

 float calcArea ( )
 {
     return dim1*dim2;
 }
};

class Triangl :public shape
{
 public:
Triangl (){}
Triangl  (int dim):shape(dim){}
Triangl (int _dim1 , int _dim2):shape(_dim1 ,_dim2){}

 float calcArea ( )
 {
     return 0.5*dim1*dim2;
 }
};

class Circle :public shape
{
public:
   void setDim1(int _dim1)
   {
       dim1=dim2=_dim1;
   }
   void setDim2(int _dim2)
   {
       dim1=dim2=_dim2;

   }
    Circle(){}
    Circle(int dim):shape(dim){}

   float calcArea()
   {
       return 3.14*dim1*dim2;
   }

};

class square:protected shape{
public:
   void setDims (int dim)
   {
       dim1=dim2=dim
   }
   square(){}
   square(int dim):shape(dim){}

   float calcArea()
   {
       return dim1*dim2;
   }

};

void PrintShapeStates(shape s)           //generalization
{
    s.print();
}

int main()
{
    Rect r1 (5,4);
    r1.print();
    cout << "rectangle "<< r1.calcArea();

    Triangl t1 (2,6);
    t1.print();
    cout <<"triangle "<< t1.calcArea();

     Circle c1 (5);
     c1.print();
     cout <<"circle "<< c1.calcArea();

    square s1 (4);
    s1.print();
     cout <<"square "<< s1.calcArea();

    PrintShapeStates(c1);


    return 0;
}
