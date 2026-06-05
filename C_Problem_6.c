#include <stdio.h>
int main() 
{
    int i,odd;
    i=9;
    loop:if(i<19)
    {
        i=i+2;
        printf("%d\n",i);
        goto loop;
    }
    return 0;
}
