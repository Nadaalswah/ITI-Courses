#include <iostream>
#include <string.h>
using namespace std;
class car
{
    char color[20];
    int maxSpeed;
    int currantSpeed;
public:
     //set
    void setmaxSpeed (int mxSpeed)
    {
      maxSpeed=mxSpeed;
    }

       void setcuurentSpeed (int cSpeed)
    {
        currantSpeed=cSpeed;
    }
      void setcolor (char* clr)
    {
        strcpy (color,clr);
    }

     //get
    int getmaxSpeed ()
    {
      return maxSpeed;
    }

    int getcuurentSpeed ()
    {
        return currantSpeed;
    }
    char* getcolor ()
    {
        return color;
    }

    int accelerate (int acce)

    { if (acce<= maxSpeed-currantSpeed)
      currantSpeed=currantSpeed+acce;
      return currantSpeed;
    }


    int deaccelerate (int deacce)

   { if (deacce < currantSpeed&& deacce>=0)
    currantSpeed=currantSpeed-deacce;
    return currantSpeed;
   }

    void print ()
    {
        cout<< "color= "<<color << "max speed= "<< maxSpeed <<"current speed= " << currantSpeed << endl;
    }
};
int main()
{
    car car1;
    car1.setcolor("red");
    car1.setmaxSpeed(1000);
    car1.setcuurentSpeed(400);
    car1.print();
    car1.accelerate(50);
    cout<< "speed after accelerate= "<< car1.getcuurentSpeed()<< endl;
    car1.deaccelerate(200);
    cout<< "speed after deaccelerate= "<< car1.getcuurentSpeed()<< endl;

    return 0;
}
