#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    printf("enter num of rows plz : ");
    scanf("%d",&rows);
    int cols;
    printf("enter num of cols plz : ");
    scanf("%d",&cols);

    int** arr= (int**) malloc(rows*sizeof(int*));

    if (arr==NULL)
       printf("Memory allocation failed");

     int i;
     int j;

     printf("enter elements of array \n");
     for(i=0;i<rows;i++)
     {
         for(j=0;j<cols;j++){
           printf("enter number %d in col number %d : ",i+1,j+1);
           scanf("%d",&arr[i][j]);
         }
     }

     for(i=0;i<rows;i++)
     {
         for(j=0;j<cols;j++)
            printf ("%d\t",arr[i][j]);

         printf("\n");
     }
    for (i=0;i<rows;i++)
        free (arr [i]);
    free(arr);
    return 0;
}
