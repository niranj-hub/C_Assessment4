#include <stdio.h>
int main()
{
    int n, first, last, temp, divisor = 1, middle, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    loop:if(temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
        goto loop;
    }
    first = temp;
    middle = (n % divisor) / 10;
    result = (last * divisor) + (middle * 10) + first;
    printf("Result = %d", result);
    return 0;
}
