//read marks of 5 subjects and calculate total and percentage
#include<stdio.h>
int main(){
    int marks1, marks2, marks3, marks4, marks5, total, percentage;

    printf("enter marks of IOCS :\n");
    scanf("%d", &marks1);
    printf("enter marks of IOP :\n");
    scanf("%d", &marks2);
    printf("enter marks of ENA :\n");
    scanf("%d", &marks3);
    printf("enter marks of ENGLISH :\n");
    scanf("%d", &marks4);
    printf("enter marks of math-1 :\n");
    scanf("%d", &marks5);
    printf("total = %d\n", marks1+marks2+marks3+marks4+marks5);
    printf("percentage = %d", (marks1+marks2+marks3+marks4+marks5)*100/500);
    
    return 0;
}