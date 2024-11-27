//swap variables using 3rd variable
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers : \n");
    scanf("%d %d",&a, &b);

    int temp = a;
    a = b;
    b = temp;

    printf("a=%d b=%d",a,b);
    return 0;
}