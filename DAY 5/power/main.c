#include <stdio.h>
#include <stdlib.h>
int power ( int n1,int n2 );
int main()
{
    int num1;
    printf("enter num1: ");
    scanf("%d",&num1);

    int num2;
    printf("enter num2: ");
    scanf("%d",&num2);

    int result;
    result=power(num1,num2);
     printf("power of %d ^ %d is: %d",num1,num2,result);

    return 0;
}
int power ( int n1,int n2 ){
    int power=1;
    int i;
    for(i=0;i<n2;i++)
    {
        power*=n1;
    }
    return power;

}
