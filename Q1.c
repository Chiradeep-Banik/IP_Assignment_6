//1. WAP to input no up to n both in ascending and descending order using do while loop

#include<stdio.h>

void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int m = 0,l =n;
    do{
        m++;
        printf("Ascending -- %d\n",m);
    } while (m<n);
    do{
        printf("Descending -- %d\n",l);
        l--;
    } while (l>0);
        
}