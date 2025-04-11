#include<stdio.h>
int main () {
    float salary;
    scanf("%f",&salary);
    if(salary>0 && salary<=400) {
        double new_salary,money_earn;
        money_earn=salary*15/100;
        new_salary=salary+money_earn;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",new_salary,money_earn);
    } else if(salary>=400.10 && salary<=800.00) {
        double new_salary,money_earn;
        money_earn=salary*12/100;
        new_salary=salary+money_earn;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",new_salary,money_earn);
    } else if(salary>=800.01 && salary<=1200.00) {
        double new_salary,money_earn;
        money_earn=salary*10/100;
        new_salary=salary+money_earn;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",new_salary,money_earn);
    } else if(salary>=1200.01 && salary<=2000.00) {
        double new_salary,money_earn;
        money_earn=salary*7/100;
        new_salary=salary+money_earn;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",new_salary,money_earn);
    } else {
        double new_salary,money_earn;
        money_earn=salary*4/100;
        new_salary=salary+money_earn;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",new_salary,money_earn);
    }
    return 0;
}