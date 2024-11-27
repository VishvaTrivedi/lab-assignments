// READ TOTAL SECOND AND CONVERT IT INTO TIME
#include<stdio.h>
void main(){
    float sec, min, hrs, days;
    
    printf("enter the total number of seconds :\n");
    scanf("%f", &sec);

    min = sec/60;
    hrs = min/60;
    days = hrs/24;

    printf("Minutes = %f", min);
    printf("Hours = %f", hrs);
    printf("days = %f", days);
}