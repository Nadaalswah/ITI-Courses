#include <stdio.h>
#include <stdlib.h>

int main()
{
  int degree;
  printf("enter student degree: ");
  scanf("%d",&degree);

  if( degree<=100 && degree >= 90)
    printf("excellent");

  else if( degree<90 && degree >= 80)
    printf("very good");

  else if( degree<80 && degree >= 70)
    printf("good");

  else if( degree<70 && degree >= 60)
    printf("acceptable");

 else if( degree<60 && degree >= 0)
    printf("fail");

 else
    printf("NOT valid degree");

    return 0;
}
