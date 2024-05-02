#include <stdio.h>
#include <stdlib.h>

int factFun(int num);


int main()
{
   int num  ;
   int result;
   printf("Enter number plz: ");
   scanf("%d",&num);

   result=factFun(num);

   printf("Factorial of %d is: %d",num,result);
    return 0;
}
int factFun(int num)
{
    int fact=1;
    int i;
    for(i=1;i<=num;i++)
      fact=fact*i;
      return fact;


}
