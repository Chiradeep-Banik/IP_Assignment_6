/* 8.iiiPrint the series --
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter the length of the series : ");
    scanf("%d", &n);
    for (int i = 0; i < n;){
        i++;
        for (int j = 0; j < i; j++){
            printf("%d",j+1);
        }
        printf("\n");
    }
}