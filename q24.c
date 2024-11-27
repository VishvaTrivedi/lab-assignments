/*y=1+x where n=1 
   =1+x/n where n=2 
   =1+x^n when  n=3 
   =1+nx when n>3 or n<1*/
#include<stdio.h>
int pov(int,int);
void main(){
    int n, x, y;

    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of n : ");
    scanf("%d", &n);

    if(n==1){
        printf("y = %d", (1+x));
    }
    else if(n==2){
        printf("y = %d",(1+(x/n)));
    }
    else if(n==3){
        printf("y = %d", 1+pov(x,n));
    }
    else{
        printf("y = %d", (1+n*x));
    }
}
int pov(int a,int n)
{
    int result=1;
    for(int i=1;i<=n;i++){
        result = result*a;
    }
     return (result);
}
