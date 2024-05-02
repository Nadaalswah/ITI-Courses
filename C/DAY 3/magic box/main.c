#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32
void gotoxy(int x,int y)
{
 COORD coord={0,0};
 coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
    int col=1;
    int row=1;
    int i=0;
    int size;
    int sq;

          printf("please enter size of magic box\n");
          scanf("%d",&size);
          printf("\n");

          if (size%2 ==0)
            printf("enter odd number plz");
           else{
                  system ("cls") ;
          sq =size * size ;

          for(i=1;i<=sq;i++)
          {
                if(i==1)
                {
                  row =1;
                  col=(size+1)/2;

                }else if(((i-1) % size) == 0){
                  row++;
                }else{
                  row--; col--;
                  if(row == 0)
                   row = size;
                  if(col == 0)
                   col = size;
                }
                gotoxy(5*col,3*row);
           printf("%d",i);

          }
           }
    return 0;
}
