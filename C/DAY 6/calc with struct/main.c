#include <stdio.h>
#include <stdlib.h>

struct cc
{
int sum ;
int sub;
int mul;
};
struct cc c;
void calc( int n1,int n2);
int main()
{
    int n1;
    printf("enter num1\n");
    scanf("%d",&n1);

    int n2;
    printf("enter num2\n");
    scanf("%d",&n2);

    calc(n1,n2);

    printf(" sum is %d \n", c.sum);
    printf(" sub is %d \n", c.sub);
    printf(" mul is %d \n", c.mul);


    return 0;
}
void calc( int n1,int n2)
 {
   int summ ;
   summ= n1+ n2;
   c.sum=summ;

   int subb;
   subb= n1-n2;
   c.sub=subb ;

    int mull;
    mull=n1 * n2;
    c.mul = mull;

 }

