/*CALCULATE THE COMMISSION FOR A SALES REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.  
If sales<=Rs. 500, commission is 5% 
If sales>500 but <=2000, commission is Rs. 35 plus 10% above Rs. 500 
If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000 
If sales>5000, commission is 12.5% */
#include<stdio.h>
void main(){
    float sales, commission;

    printf("Enter the amount of sales : ");
    scanf("%f", &sales);

    if(sales<=500.0){
        commission = sales*0.05;
    }
    else if(sales>500.0 && sales<=2000.0){
        commission = 35.0 + (sales-500.0)*0.1;
    }
    else if(sales>2000.0 && sales<=5000.0){
        commission = 185.0 + (sales-2000.0)*0.12;
    }
    else{
        commission = sales*0.125;
    }

    printf("The commission on %f = %f", sales, commission);

}