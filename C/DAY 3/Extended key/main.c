#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    ch=getch();
    if (ch==-32)
    {
        printf("extended key: ");
        ch=getch();
        printf("%c:%d",ch,ch);
    }
    else{
        printf("normal key %c : %d",ch,ch);
    }
    return 0;
}
