#include <stdio.h>
#include <stdlib.h>
void swap (int* x ,int* y);
int main()
{
    int n1;
    printf("enter num1\n");
    scanf("%d",&n1);

    int n2;
    printf("enter num2\n");
    scanf("%d",&n2);

    swap(&n1,&n2);
    printf("swap  is %d and %d: ",n1,n2);


    return 0;
}

void swap (int* x ,int* y)
{
    int temp = *x;
    *x=*y;
    *y = temp;

}
