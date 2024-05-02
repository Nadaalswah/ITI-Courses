#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int flag=0;


     do{
       system("cls") ;
      printf("\n New \n Display \n Exit");
      printf("enter N,D or E");
      ch=getch();

      switch(ch)
      {
          case 'n':
          case 'N':
              printf("\n New selected");
              getch();
            break;

          case 'd':
          case 'D':
              printf("\n Display selected");
              getch();
            break;

          case 'e':
          case 'E':
              printf("\n Exit selected");
              flag=1;
            break;
      }

      }while(flag==0);




    return 0;
}
