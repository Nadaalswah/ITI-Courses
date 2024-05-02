#include <iostream>

using namespace std;

class shape                           //abstract class
{
    protected:
    int dim1;
    int dim2;

    public:
    shape(int _dim1,int _dim2)
    {
        dim1=_dim1;
        dim2=_dim2;
    }
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


    void print()
    {
        cout << endl<< "("<< dim1 <<"," << dim2 << ")" ;
    }

    virtual  float calcArea ()=0;                              //dynamic binding...............pure virtual
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

class square:public shape{
public:
   void setDim1(int _dim1)
   {
       dim1=dim2=_dim1;
   }
   void setDim2(int _dim2)
   {
       dim1=dim2=_dim2;

   }
   square(){}
   square(int dim):shape(dim){}

   float calcArea()
   {
       return dim1*dim2;
   }

};
void printShapeArea(shape *s)
{
    cout<< " area= "<<s->calcArea();
}

void PrintShapeStates(shape* s)          //i can  make pointer from abstract class
{
    s->print();
}
/*
void PrintShapeStates(shape s)           //i can not use it .... i can not make object from abstract class
{
    s.print();
}
*/
int main()
{
    Rect r1(5,4);
    PrintShapeStates(&r1);

    printShapeArea(&r1);

    Triangl t1 (2,6);
    Circle c1 (5);
    square s1 (4);

    shape* arr[4]={&r1,&t1,&c1,&s1};     //sum area function
    float sum=0;
    for (int i=0 ; i<3 ;i++)
        sum+=arr[i]->calcArea();

    cout <<endl<<" sum= "<<sum;


    return 0;
}
