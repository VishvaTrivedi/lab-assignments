//conversion of seconds
#include<stdio.h>
int main(){
    float sec, min, hrs, days;
    sec = 31558150.0;
    min = sec/60;
    hrs = min/60;
    days = hrs/24;

    printf("Minutes = %f", min);
    printf("Hours = %f", hrs);
    printf("days = %f", days);

    return 0;
}