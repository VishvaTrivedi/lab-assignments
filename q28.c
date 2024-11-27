//CHECK WHETHER A NO IS ARMSTRONG OR NOT
#include<stdio.h>
#include<math.h>
void main(){
    int n, ognum, num=0, sum=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    ognum = n;

    //count the number of digits
    while(n>0){
        num++;
        n=n/10;
    }
    
    int original = ognum;

    while(ognum>0){
        int r = ognum%10;
        sum=sum+pow(r,num);
        ognum=ognum/10;
    }

    if(sum==original){
        printf("%d is an armstrong number", original);
    }
    else{
        printf("%d is not an armstrong number", original);
    }

}    