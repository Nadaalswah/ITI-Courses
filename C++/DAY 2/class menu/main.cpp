#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define null -32
using namespace std;

void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
  GetStdHandle( STD_OUTPUT_HANDLE ),
  coord
    );
  }
void textattr(int i)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}

class Menu{

    char menu[3][10];
    int Highlight_color;
    int default_color;
    int x;
    int y;
    int i;
    char ch;
    int cursor=0;
    int flag =0;
public:
    Menu ()
    {
        strcpy(menu[0],"New");
        strcpy(menu[1],"Display");
        strcpy(menu[2],"Exit");
        Highlight_color=0x27;
        default_color=0x07;
        x=10;
        y=5;

    }
    void setHcolor (int h_color)
    {
        Highlight_color=h_color;
    }
    void setMlocation (int _x,int _y )
    {
        x=_x;
        y=_y;
    }

    int getCursor (int* _curcor)
    {
      ch=getch();
    switch (ch)
    {

        case -32: //exnum
         ch=getch();
         switch (ch)
         {
           case 72 : //up
              cursor--;
              if (cursor<0)
                    cursor=2;
        break;


        case 80://down

            cursor++;
              if (cursor>2)
                cursor=0;
          break;


          case 71://home
              cursor=0;
        break;


         case 79://end
            cursor=2;
        break;

         }
          break;


        case 27: //escape
          flag=1;
          break;


        case 13: // enter
        system("cls");
        printf("%s",menu[cursor]);
        getch();
        if(cursor==2)
            flag=1;
        break;
    }
    return cursor;
    }

    void draw(){

        do{
    system("cls");
    for(i=0;i<3;i++)
    {
        gotoxy(x,y+i);
        if (i==cursor)
            textattr( Highlight_color);
        printf("%s",menu[i]);
        textattr(default_color);
    }
    cursor=getCursor(&flag);

    }while(flag==0);
}
};
int main()
{
   //8 Menu m1;
   // m1.draw();
    Menu m2;
    m2.setHcolor(0x57);
    m2.setMlocation(10,20);
    m2.draw();

    return 0;
}
