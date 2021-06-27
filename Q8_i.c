/**8.i Print the pattern 
 * *  *  *  *  * 
    *  *  *  * * 
       *  *  * *
          *  * *
             * *
               *    
*/
#include<stdio.h>

void main(){
    int n;
    printf("Enter the length of the series : ");
    scanf("%d", &n);
    for (int i = 0; i <=n; i++){
        int j =i;
        for(int k=0; k<=j;k++){
            printf(" ");
        }
        for(int l =i+1;l<=n;l++){
            printf("*");
        }
        printf("\n");    
    }
}

