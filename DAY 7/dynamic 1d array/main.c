#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("enter size of array plz : ");
    scanf("%d",&size);

    int*arr=(int*) malloc(size * sizeof(int));
    int i;
    for(i = 0; i< size; i++)
    {
      printf("enter number %d : ",i+1);
      scanf("%d",&arr[i]); //or arr+1
    }

    for(i = 0; i< size; i++)
    {
     printf("%d \t",arr[i]);
    }


    free(arr);

    return 0;
}
