#include <stdio.h>
#include <stdlib.h>

int sum ;
int sub;
int mul;

void calc( int* n1,int* n2);
int main()
{
   int n1;
    printf("enter num1\n");
    scanf("%d",&n1);

    int n2;
    printf("enter num2\n");
    scanf("%d",&n2);

    calc(&n1,&n2);

    printf(" sum is %d \n", sum);
    printf(" sub is %d \n", sub);
    printf(" mul is %d \n", mul);

    return 0;
}
 void calc( int* n1,int* n2)
 {
   int summ ;
   summ= (*n1) + (*n2);
   sum=summ;

   int subb;
   subb=*n1-*n2;
   sub=subb ;

    int mull;
    mull=*n1 * *n2;
    mul = mull;

 }
