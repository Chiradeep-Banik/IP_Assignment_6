//Q4 -- WAP to calculate factorial of a number

#include<stdio.h>
int fact(int n){
    if (n <= 1)
        return 1;
    else
        return (n*fact(n-1));
}

void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("The factorial of %d is : %d\n",n,fact(n));
}