// PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
#include<stdio.h>
void main(){
    int n, sum=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    int ognum=n;

    while(n>0){
        int r = n%10;
        sum=sum+r;
        n=n/10;
    }

    printf("sum of individual digits of %d = %d", ognum, sum);

}