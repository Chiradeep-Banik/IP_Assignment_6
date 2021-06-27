//2. WAP to check whether particular no is armstrong or  not
#include <stdio.h>

void armstrong_check(int n)
{
    int arm_check = 0;
    int init_no = n;
    for (int i = 0; n != 0; i++)
    {
        int a = n % 10;
        n = n / 10;
        arm_check += (a * a * a);
    }
    if (arm_check == init_no)
        printf("%d is an armstrong number.\n", init_no);
    else
        printf("%d is not an armstrong number.\n", init_no);
}

void main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    armstrong_check(n);
}