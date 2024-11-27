/*  1          
   12               
  123         
 1234              
12345  */
#include<stdio.h>
void main(){
    int a, i, j, k;
    for(i=1;i<6;i++){
        a=1;
        for(j=1;j<6-i;j++){
            printf(" ");
        }
        for(k=i;k>=1;k--){
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
}