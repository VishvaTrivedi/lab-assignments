//PRINT 1/1!+2/2!+3/3!+4/4!,………N
#include<stdio.h>
void main(){
    int N, num=0;

    printf("Enter the value of N : ");
    scanf("%d", &N);

    while(num<N){
        num++;
        printf("%d/%d!+", num,num);
    }
}