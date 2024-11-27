// READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE
#include<stdio.h>
void main(){
    int n, count=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i=2; i<n; i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==0){
        printf("%d is a prime number", n);
    }
    else{
        printf("%d is a composite number", n );
    }

}