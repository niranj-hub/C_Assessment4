#include <stdio.h>
int main()
{
    int n, tens, ones, sum;
    n=11;
loop:if(n < 100)
    {
        ones=n%10;
        tens=n/10;
        sum=tens+ones;
        if(sum==7)
        {
            printf("%d\n", n);
        }
        n=n+2;
        goto loop;
    }
    return 0;
}
