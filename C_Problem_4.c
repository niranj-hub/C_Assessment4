#include <stdio.h>
int main() 
{
    int i,sum;
    i=7;
    sum=0;
    loop:if(i>1)
    {
        i=i-1;
        sum=sum+i;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}
