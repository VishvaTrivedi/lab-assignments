// READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)
#include<stdio.h>
void main(){
    int N;

    printf("Enter a number : ");
    scanf("%d", &N);

    printf("Factors of %d are : \n", N);
    for(int i=1; i<=N; i++){
        if(N%i==0){
            printf("%d  ", i);
        }
    }
}