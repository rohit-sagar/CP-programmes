#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) 
    {
        sum += i;
    }
    printf("Sum of n natural numbers is = %d", sum);
    return 0;
}