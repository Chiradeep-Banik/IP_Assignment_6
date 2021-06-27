/**8.iv Print the pattern
 * 1
 * 2 3  
 * 4 5 6
 * 7 8 9 10
*/

#include<stdio.h>

void main(){
    int n;
    printf("Enter the length of the series : ");
    scanf("%d", &n);
    int sum = n*(n+1)/2;
    int arr[sum];
    for(int i = 0; i <sum ; i++){
        arr[i] = i+1;
    }
    int term_1 = arr[0];
    for(int k = 0,l=2; k < sum ;k++){
        printf("%d ",arr[k]);
        if (k==0)
            printf("\n");
        if(arr[k] == term_1+l){
            term_1 = arr[k];
            l++;
            printf("\n");
        }
    }
}