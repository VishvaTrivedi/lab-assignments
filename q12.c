// PRINT ASCII CODE OF ANY CHARACTER
#include<stdio.h>
void main(){
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    printf("The ASCII value of %c = %d", ch, ch);
}