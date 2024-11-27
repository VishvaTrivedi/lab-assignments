/*
10000           
01000                        
00100                      
00010                   
00001        
*/
#include<stdio.h>
void main(){
    int i, j;

    for(i=1;i<6;i++){
        for(j=1;j<6;j++){
            if(j==i){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}