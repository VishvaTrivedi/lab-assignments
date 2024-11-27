// PRINT 1,4,9,16,25,………N
#include<stdio.h>
void main(){
    int N, num=0, i=1;

    printf("Enter the value of N : ");
    scanf("%d", &N);

    while(num<N){
        num=i*i;
        printf("%d,", num);
        i++;
    }

}