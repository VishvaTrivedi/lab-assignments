// PRINT 1,3,5,7,9………N
#include<stdio.h>
void main(){
    int N, num=-1;

    printf("Enter the value of N : ");
    scanf("%d", &N);

    while(num!=N){
        num+=2;
        printf("%d,", num);
    }

}