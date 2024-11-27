//CHECK WHETHER A NO IS PALINDROM OR NOT
#include<stdio.h>
void main(){
    int n, sum=0;

    printf("Enter any number : ");
    scanf("%d", &n);

    int ognum = n;

    while(n>0){
        int r = n%10;
        sum = r + (sum*10);
        n=n/10;
    }

    if(sum==ognum){
        printf("%d is a palindrome number", ognum);
    }
    else{
        printf("%d is not a palindrome number", ognum);
    }

}