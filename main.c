#include <stdio.h>

int main()
 {
    char municipality[50];
    char mayor[50];
    int population;

    double revenue;
    double expenses;
    double balance;

    int departments;
    double payroll;
    double procurement;
    double assets;

    printf(" MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n\n");

    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter Municipality Name: ");
    scanf(" %49s", municipality);

    printf("Enter Mayor's Name: ");
    scanf(" %49s", mayor);

    printf(" Enter Population: ");
    scanf("%d", &population);

    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("Enter number of departments: "); 
    scanf("%d", &departments);

    printf("Enter payroll: "); 
    scanf("%lf", &payroll);

    printf("Enter procurement: "); 
    scanf("%lf", &procurement);

    printf("Enter assets: "); 
    scanf("%lf", &assets);

    
     printf("\n--------------------\n");
     printf("Municipality : %s\n", municipality);
     printf("Mayor's      : %s\n", mayor);
     printf("Population   : %d\n", population);
     
     printf("\nMUNICIPAL BUDGET SUMMARY\n"); 
     printf("------------------------\n"); 
     printf("Revenue        : %.2f\n", revenue);
     printf("Expenses       : %.2f\n", expenses); 
     printf("Budget balance : %.2f\n", balance);

     printf("\nMUNICIPAL FINANCIAL SUMMARY\n"); 
     printf("---------------------------\n"); 
     printf("Departments : %d\n", departments); 
     printf("Payroll     : %.2f\n", payroll); 
     printf("Procurement : %.2f\n", procurement); 
     printf("Assets      : %.2f\n", assets);

     return 0;

}
