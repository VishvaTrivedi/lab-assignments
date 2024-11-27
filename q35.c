// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
#include<stdio.h>
void main(){
    int n, sum=0, s=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    int ognum=n;

    while(n>0){
        int r = n%10;
        sum=sum+r;
        n=n/10;
    }
    while(sum>0){
        int rem = sum%10;
        s=s+rem;
        sum=sum/10;
    }

    printf("sum of individual digits of %d = %d", ognum, s);
}