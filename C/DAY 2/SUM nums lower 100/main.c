#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value=0;
    int sum=0;
    do{
        printf("enter the value: ");
        scanf("%d",&value);
        sum+=value ;

    }while(sum<100);
    printf("now sum = %d",sum);
    return 0;
}
