#include <stdio.h>
int main()
{
    int n,a,rev;
    printf("Enter a number:");
    scanf("%d",&n);
    rev=0;
loop:if(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
        goto loop;
    }
    printf("%d",rev);
    return 0;
}
