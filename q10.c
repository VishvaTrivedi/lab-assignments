// PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE FORMULA CM = M/2+P/2+C/2+E 
#include<stdio.h>
void main(){
    float M, P, C, E, CM;
/*M = Marks in Mathematics out of 200 
P = Marks in Physics out of 200 
C = Marks in Chemistry out of 200 
E = Marks in entrance examination out of 100 */

    printf("Enter the marks in mathematics :\n");
    scanf("%f", &M);
    printf("Enter the marks in physics :\n");
    scanf("%f", &P);
    printf("Enter the marks in chemistry :\n");
    scanf("%f", &C);
    printf("Enter the marks in entrance examination :\n");
    scanf("%f", &E);

    CM = M/2+P/2+C/2+E;

    printf("The cut off marks = %f", CM);
}