#include <stdio.h>
int main() 
{
    int i;
    i=6;
    loop:if(i>1)
    {
        i=i-1;
        printf("%d\n",i);
        goto loop;
    }
    return 0;
}
