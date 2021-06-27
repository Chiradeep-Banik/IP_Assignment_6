//Q6(i)--sum the series ---- 1^2+1/2^2+1/3^2+..................+1/n^2

#include <stdio.h>

double series(int n)
{
    double sum = 0.0;
    for (double i = 1; i <= n; ++i)
    {
        sum = sum + (1 / (i * i));
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    double sum = series(n);
    printf("The sum of the series is %.5f\n", sum);
    return 0;
}