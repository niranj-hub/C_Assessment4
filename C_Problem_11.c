#include <stdio.h>
int main()
{
    int n,sum;
    sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
loop:if(n>0)
    {
      n=n/10;
      sum=sum+1;
      goto loop;
    }
    printf("%d\n", sum);
    return 0;
}
