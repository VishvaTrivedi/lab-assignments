//READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR
#include<stdio.h>
void main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    printf("%c is a %s", ch, (ch>=97 && ch<=122) ? "small case letter" : "not a small case letter");
    
}