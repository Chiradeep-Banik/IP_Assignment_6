/**8.ii Print the pattern
 *  A
    A B
    A B C
    A B C D
    A B C D E
*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter the length of the series : ");
    scanf("%d", &n);
    for (int i = 0; i < n;)
    {
        i++;
        for (int j = 0; j < i; j++){
            printf("%c", 65 + j);
        }
        printf("\n");
    }
}