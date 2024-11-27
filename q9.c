//READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND
#include<stdio.h>
void main(){
    float HR, MIN, SEC,TOTAL_SECONDS;

    printf("Enter the number of hours : \n");
    scanf("%f", &HR);
    printf("Enter the number of minutes : \n");
    scanf("%f", &MIN);
    printf("Enter the number of seconds : \n");
    scanf("%f", &SEC);

    TOTAL_SECONDS = (HR*60*60) + (MIN*60) + SEC;

    printf("total number of seconds = %f", TOTAL_SECONDS);
}
