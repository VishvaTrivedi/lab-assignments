//CHECK WHETHER A GIVEN CHARACTER IS CAPITAL LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL
#include<stdio.h>
void main(){
    char ch;
    printf("enter a character: ");
    scanf("%c", &ch);


    if(ch>=65 && ch<= 90){
        printf("entered character is a capital letter.");
    }
    else if(ch>=97 && ch<=122){
        printf("entered character is a small case letter.");
    }
    else if(ch>=48 && ch<=57){
        printf("entered character is a digit.");
    }
    else{
        printf("entered character is a special character.");
    }
}