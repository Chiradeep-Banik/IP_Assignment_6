//3. WAP to check whether particular no is palindrome or not

#include<stdio.h>

void palindrome_check(int n){
    int m =n;
    int new_num=0;
    for(int i = 0; m!=0;i++){
        int modu = m%10;
        m = m/10;
        if(i = 0)
            new_num = modu;
        else 
            new_num = new_num*10 + modu;
    }
    if(new_num == n)
        printf("%d is a palindrome.\n",n);
    else
        printf("%d is a not palindrome.\n",n);
}

void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    palindrome_check(n);
}