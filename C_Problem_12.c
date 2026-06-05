#include <stdio.h>
int main()
{
    int n,a,sum;
    sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
loop:if(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}
