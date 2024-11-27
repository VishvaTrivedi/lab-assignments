//CALCULATE FACTORIAL OF A NO.
#include<stdio.h>
void main(){
    int n, fact=1;
    printf("Enter the number jiska factorial nikalna hai : ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        fact = fact*i;
    }

    printf("factorial of %d = %d", n, fact);
}