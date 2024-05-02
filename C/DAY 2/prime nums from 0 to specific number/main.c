#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i, num;
 int endNum;
 int flag=0;
  printf("enter the end number: ");
        scanf("%d",&endNum);


    for (num = 2; num <= endNum; num++){
        flag = 0;
        for (i = 2; i <= num/2; i++){
            if (num % i == 0){
                flag=1;
                break;
            }
        }


        if (flag== 0 ){
            printf("%d \n", num);
        }
    }


    return 0;

}






