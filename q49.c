/*
    * 
   **     
  ***                  
 ****                        
*****   
*/
#include<stdio.h>
void main(){
    int i, j, k;
    for(i=1;i<6;i++){
        for(j=1;j<6-i;j++){
            printf(" ");
        }
        for(k=i;k>=1;k--){
            printf("*");
        }
        printf("\n");
    }
}