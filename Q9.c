//9.Write a program to enter a numer and find the reverse of that number.

#include<stdio.h>

void num_reverse(int n){
    int m =n;
    int reverse_num=0;
    for(int i = 0; m!=0;i++){
        int modu = m%10;
        m = m/10;
        if(i = 0)
            reverse_num = modu;
        else 
            reverse_num = reverse_num*10 + modu;
    }
    printf("The reverse of %d is %d\n",n,reverse_num);

}

void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    num_reverse(n);
}