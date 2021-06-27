//Q6(ii)--sum of the series -- 1/2+2/3+.............+n/n+1

#include<stdio.h>

double series_sum(int n){
    double sum = 0;
    for (double i = 1; i <= n; i++){
        sum += i/(i+1);
    }
    return sum;
}

int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The sum of the series is %.5f\n",series_sum(n));
    return 0;
}
