//5.WAP to print all the no from m to n using for loop and therefore classify them as even or odd

#include<stdio.h>

void main(){
    int n,m;
    printf("Enter the value of m : ");
    scanf("%d", &m);
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(;m<=n;m++){
        if (m%2 == 0)
            printf("%d -- even \n",m);
        else
            printf("%d -- odd \n",m);
    }
}