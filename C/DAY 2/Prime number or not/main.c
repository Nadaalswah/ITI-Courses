#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    int flag=0;
    int i;
    printf("enter the number: ");
        scanf("%d",&num);



  if (num == 0 || num == 1)
    flag = 1;
  for (i = 2; i <= num / 2; ++i) {


    if (num % i == 0) {
      flag = 1;
      break;
    }
  }


  if (flag == 0)
    printf("it is a prime number.");
  else
    printf("it is not a prime number.");


    return 0;
}

