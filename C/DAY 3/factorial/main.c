#include <stdio.h>
#include <stdlib.h>

int main()
{

     int fact=1;
     int num;
 printf("Enter number plz: ");
  scanf("%d",&num);
    int i;
    for(i=1;i<=num;i++)
      fact=fact*i;

  printf("Factorial of %d is: %d",num,fact);

    return 0;

}
