#include<stdio.h>
int main () {
    char name[50];
    double FixSalary,TotalSold;
    scanf("%s %lf %lf",&name,&FixSalary,&TotalSold);
    double Salary=FixSalary+(TotalSold*(15.00/100.00));
    printf("TOTAL = R$ %.2lf\n",Salary);
    return 0;
}