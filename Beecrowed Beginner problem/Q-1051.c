#include<stdio.h>
int main () {
    float salary;
    scanf("%f",&salary);
    if(salary>0.00 && salary<=2000.00) printf("Isento\n");
    else if(salary>=2000.01 && salary<=3000.00) {
        double x=salary-2000.00;
        double tax=x*8/100;
        printf("R$ %.2lf\n",tax);
    } else if(salary>=3000.01 && salary<=4500.00) {
        double y=salary-3000.00;
        double tax1=1000*8/100;
        double tax2=y*18/100;
        printf("R$ %.2lf\n",tax1+tax2);
    } else {
        double z=salary-4500.00;
        double tax1=1000*8/100;
        double tax2=1500*18/100;
        double tax3=z*28/100;
        printf("R$ %.2lf\n",tax1+tax2+tax3);
    }
    return 0;
}