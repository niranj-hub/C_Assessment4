#include <stdio.h>
int main() 
{
    int i;
    i=0;
    loop:if(i<5)
    {
        i=i+1;
        printf("%d\n",i);
        goto loop;
    }
    return 0;
}
