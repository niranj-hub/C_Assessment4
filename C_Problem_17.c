#include <stdio.h>
int main()
{
    int n, i, flag;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<=1)
    {
        printf("Not Prime");
        return 0;
    }
    i=2;
    flag=0;
loop:if (i<n)
    {
        if (n%i==0)
        {
            flag=1;
        }
        i++;
        goto loop;
    }
    if (flag == 0)
        printf("Prime Number");
    else
        printf("Not Prime");
    return 0;
}
