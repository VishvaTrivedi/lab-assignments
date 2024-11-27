/*AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS FOLLOWS. 
Consumption in unit   Rate for Charge 
0-200                 Rs 0.50 per unit
201-400               Rs. 100 plus Rs. 0.65 per unit excess of 200 
401-600               Rs. 230 plus Rs. 0.80 per unit excess of 400 
Above 600             Rs. 425 plus Rs. 1.25 per unit excess of 600*/
#include<stdio.h>
void main(){
    float unit, charge;

    printf("Enter the units consumpted : ");
    scanf("%f", &unit);

    if(unit>=0.0 && unit<=200.0){
        charge = unit*0.50;
    }
    else if(unit>=201.0 && unit<=400.0){
        charge = 100.0 + (unit-200.0)*0.65;
    }
    else if(unit>=401.0 && unit<=600.0){
        charge = 230.0 + (unit-400.0)*0.80;
    }
    else{
        charge = 425.0 + (unit-600.0)*1.25;
    }

    printf("The total charge = %f",charge);
    
}