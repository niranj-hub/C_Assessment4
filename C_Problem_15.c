#include <stdio.h
int main()
{
    int n, ones, tens, new_last, result;
    printf("Enter a number:");
    scanf("%d", &n);
    ones=n%10;
    tens=n/10;
    if (ones%2==0)
    {
        result=n;
    }
    else
    {
        new_last=ones-1;
        result=(tens*10)+new_last;
    }
    printf("Result=%d",result);
    return 0;
}
