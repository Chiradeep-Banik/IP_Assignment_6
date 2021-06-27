//10. Write a program to read the numbers until -1 is encounter also calculate the sum and mean of al +ve numbered entered and
//the sum and mean of all -ve numers entered seperately, do it using Do While loop.

#include<stdio.h>

void main(){
    int n ;
    int neg_sum=0,neg_count=0,pos_sum =0,pos_count=0;
    do{
        printf("Enter a value for n : ");
        scanf("%d",&n);
        if(n>0){
            pos_count++;
            pos_sum= pos_sum +n;
        }
        else{
            neg_count++;
            neg_sum =neg_sum + n;
        }
    } while (n != -1);
    float pos_mean =0;
    if (pos_count != 0)
        pos_mean =(pos_sum/(float)pos_count);
    float neg_mean = neg_sum/(float)neg_count;
    printf("Pos_sum = %d\nNeg_sum = %d\npos_mean = %lf\nNeg_mean = %lf\n",pos_sum,neg_sum,pos_mean,neg_mean);
    
}