// PRINT 2,4,6,8,10,12………N
#include<stdio.h>
void main(){
    int N, num=0;

    printf("Enter the value of N : ");
    scanf("%d", &N);

    while(num!=N){
        num+=2;
        printf("%d,", num);
    }

}