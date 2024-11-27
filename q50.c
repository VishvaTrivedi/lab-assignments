/* 
A 
BB 
CCC 
DDDD 
EEEEE  */
#include<stdio.h>
void main(){
    int i, j;
    char ch='A';
    for(i=1;i<6;i++){
        for(j=1;j<=i;j++){
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }
}