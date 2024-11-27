//READ MARKS OF FIVE SUBJECT AND PRINT DIVISION
#include<stdio.h>
void main(){
    float m1,m2, m3, m4, m5, avg;
    printf("Enter the marks of Engineering Mathematics :");
    scanf("%f", &m1);
    printf("Enter the marks of Electrical Network Analysis :");
    scanf("%f", &m2);
    printf("Enter the marks of Introduction of Programming :");
    scanf("%f", &m3);
    printf("Enter the marks of Introduction of Computer Science :");
    scanf("%f", &m4);
    printf("Enter the marks of English and Professional Communication :");
    scanf("%f", &m5);

    avg = (m1+m2+m3+m4+m5)/5;
    if(avg >= 75){
        printf("A");
    }
    else if(avg >= 65 && avg < 75){
        printf("B");
    }
    else if(avg >= 50 && avg < 65){
        printf("C");
    }
    else if(avg >= 33 && avg < 50){
        printf("D");
    }
    else{
        printf("F");
    }
}