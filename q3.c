//calculate gross salary
#include <stdio.h>
int main() {
    float Salary, HRA, DA, grossSalary;

    printf("Enter the Salary", Salary);
    scanf("%f", &Salary);

    HRA = Salary * 0.20; 
    DA = Salary * 0.50;  

    grossSalary = Salary + HRA + DA;

    printf("Gross Salary = %f\n", grossSalary);

    return 0;
}