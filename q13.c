//CHECK EVEN OR ODD
#include<stdio.h>
void main(){
    int a;
    printf("Enter an integer: \n");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("entered number is an even number.");
    }
    else{
        printf("entered number is an odd number.");
    }
}