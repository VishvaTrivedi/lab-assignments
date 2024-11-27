#include <stdio.h>
struct member
{
    char employee_name[50];
    int employee_number;
    float basic_salary;
};
void main()
{
    struct member employeedata[2];
    struct member *ptr;
    ptr=employeedata;
    printf("Enter following details\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Employee Name:\n");
        // getchar();
        // fgets(ptr->employee_name, 50, stdin);
        // fflush(stdin);
        scanf("%s",employeedata[i].employee_name);
      //  while(getchar()!='\n');
        printf("Employee Number:\n");
        scanf("%d", &employeedata[i].employee_number);
        printf("Employee's salary:\n");
        scanf("%f", &employeedata[i].basic_salary);
        //ptr++;
    }
    //ptr = employeedata;
    printf("S.no. Name \t\t Number \t Salary \t \n ");
    for (int i = 0; i < 2; i++)
    {
        printf("%d  %-15s  %d \t\t %.2f\n", i + 1, ptr->employee_name, ptr->employee_number, ptr->basic_salary);
        ptr++;
    }
}