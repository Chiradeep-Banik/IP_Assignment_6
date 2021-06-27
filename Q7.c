//Q7--Write a program to show fibonnaci series of a number.
#include<stdio.h>
int fibo(int n){
    int sum = 0;
    if(n ==1 || n == 0)
        return 1;
    else
        return (fibo(n-1) + fibo(n-2));
}


int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        printf(" %d ",fibo(i));
    }
    printf("\n");
    return 0;
}
