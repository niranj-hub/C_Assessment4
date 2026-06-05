#include <stdio.h>
int main()
{
    int n, tens, ones, sum;
    n=11;
    sum=0;
loop:if(n < 100)
    {
        ones=n%10;
        tens=n/10;
        if(tens==7)
        {
            sum=sum+n;
        }
        n=n+2;
        goto loop;
    }
    printf("%d\n", sum);
    return 0;
}
