// REVERSE OF A GIVEN NO. 
#include<stdio.h>
void main(){
    int ognum, reverse=0;

    printf("Enter any number : ");
    scanf("%d", &ognum);

    while(ognum>0){
        int r = ognum%10;
        reverse = r + (reverse*10);
        ognum=ognum/10;
    }

    printf("reversed number = %d", reverse);

}    