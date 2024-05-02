#include <iostream>
#include <graphics.h>
#include <stdio.h>
#include <windows.h>
#define null -32


//---------------------------------object relation >>composition--------------------

using namespace std;
class point
{
    int x;
    int y;
public:
    //-----------------------------sets------------------
    void setx(int _x)
    {
        x=_x;
    }
    void sety(int _y)
    {
        y=_y;
    }
    void setPoint(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
    //------------------------gets------------------------
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

    //----------------------constructors-----------------
    point()
    {
        x=y=0;
        // cout << "\n point parameter ctor" ;
    }

    point(int xy)
    {
        x=y=xy;
    }

    point(int _x,int _y)
    {
        x=_x;
        y=_y;
    }

    void print()
    {
        cout << "("<<x <<"," << y<< ")";
    }
};


class Rectanglee
{
    point ul;      //(0,0)
    point lr;
public:
    //-----------------------constructors------------------
    //using change :

    Rectanglee():ul(0,0),lr(0,0)
    {
        //cout<<"\n rectangle parameterless ctor";
    }

    Rectanglee(int x1,int y1,int x2, int y2 ):ul(x1,y1),lr(x2,y2)
    {
        ul.setPoint(x1,y1);
        lr.setPoint(x2,y2);
    }
    //---------------------------------sets-----------------------
    void setRect(point _ul,point _lr)
    {
        ul=_ul;
        lr=_lr;
    }
    void setRect (int x1,int y1,int x2, int y2)
    {
        ul.setPoint(x1,y1);
        lr.setPoint(x2,y2);
    }

    //ul
    void setUL(int x, int y)
    {
        ul.setPoint(x,y);
    }

    void setUL(point _ul)
    {
        ul=_ul;
    }
    //lr
    void setLR(int x, int y)
    {
        lr.setPoint(x,y);
    }

    void setLR(point _lr)
    {
        lr=_lr;
    }
    //------------------------gets-------------------------
    point getUL()
    {
        return ul;
    }
    point getLR()
    {
        return lr;
    }

    void draw ()
    {
        rectangle(ul.getx(),ul.gety(),lr.getx(),lr.gety());  //using library
    }
    void print()
    {
        cout <<"\n upper left point";
        ul.print();
        cout <<"\n left right point";
        lr.print();
    }
};


class Circ
{
    point center;
    int rad;
public:
     //-----------------------------sets------------------
    void setCenter(int x, int y)
    {
        center.setPoint(x,y);
    }
    void setCenter(point _center)
    {
        center=_center;
    }
    void setRad(int _rad)
    {
        rad=_rad;
    }
     //----------------------constructors-----------------
    Circ()
    {
        rad=1;
    }
    Circ(int _x,int _y,int _rad):center(_x,_y)
    {
        rad=_rad;
    }
    void print()
    {
        center.print();
        cout<<"and rad= "<<rad;
    }
    void draw()
    {
        circle(center.getx(),center.gety(),rad);
    }
} ;

class Line
{
    point Start;
    point End;
public:
     //-----------------------------sets------------------
    void setStart(int x,int y)
    {
        Start.setPoint(x,y);
    }
    void setEnd(int x,int y)
    {
        End.setPoint(x,y);
    }
     //------------------------gets------------------------
    point getStart()
    {
        return Start;
    }
    point getEnd()
    {
        return End;
    }
     //----------------------constructors-----------------
    Line():Start(0,0),End(0,0) {}

    Line(point _start,point _end):Start(_start),End(_end) {}

    Line(int x1,int y1,int x2,int y2):Start(x1,y1),End(x2,y2) {}

    void printLine()
    {
        cout<<"\nStart point\n";
        Start.print();
        cout<<"\nEnd point\n";
        End.print();
    }

    void draw()
    {
        line(Start.getx(),Start.gety(),End.getx(),End.gety());

    }
};

class Triangle
{
    point p1;
    point p2;
    point p3;

public:
     //-----------------------------sets------------------
    void setTriangle(point _p1,point _p2, point _p3)
    {
       p1=_p1;
       p2=_p2;
       p3=_p3;
    }
    void setTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
    {
        p1.setPoint(x1,y1);
        p2.setPoint(x2,y2);
        p3.setPoint(x3,y3);
    }
    void setP1(int x,int y)
    {
        p1.setPoint(x,y);
    }
     void setP2(int x,int y)
    {
        p2.setPoint(x,y);
    }
     void setP3(int x,int y)
    {
        p3.setPoint(x,y);
    }
     //------------------------gets------------------------
    point getP1()
    {
        return p1;
    }
    point getP2()
    {
        return p2;
    }
    point getP3()
    {
        return p3;
    }
     //----------------------------------constructors----------------------------------------
    Triangle():p1(0,0),p2(0,0),p3(0,0) {}

    Triangle(point _p1,point _p2, point _p3):p1(_p1),p2(_p2),p3(_p3){}

    Triangle (int x1, int y1, int x2, int y2, int x3, int y3): p1(x1,y1),p2(x2,y2),p3(x3,y3){}

    void draw ()
    {
        line(p1.getx(),p1.gety(),p2.getx(),p2.gety());
        line(p2.getx(),p2.gety(),p3.getx(),p3.gety());
        line(p3.getx(),p3.gety(),p1.getx(),p1.gety());
    }

};




int main()
{

    int gdriver=DETECT,gmode,errorcode;
    initgraph(&gdriver,&gmode,"");

    Rectanglee r1 (300,200,400,50);
    r1.draw();


    for (int i=0; i<50 ; i++)
    {
        Circ c2 (20,20,10+i*3);
        c2.draw();
    }
    Circ c1 (200,200,50) ;
    c1.print();
    c1.draw();

    Line l1 (100,200,300,400);
    l1.draw();
    Line l (200,200,300,400);
    l.draw();


    Triangle t1 (50,100,100,350,350,400);
    t1.draw();
Triangle t2 (20,100,100,250,250,350);
    t2.draw();
    getch();
    closegraph();

    return 0;
}
