/* 
A                                   
AB               
ABC               
ABCD            
ABCDE  */
#include<stdio.h>
void main(){
    char ch;
    int i, j;

    for(i=1;i<6;i++){
        ch = 'A';
        for(j=1;j<=i;j++){
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}