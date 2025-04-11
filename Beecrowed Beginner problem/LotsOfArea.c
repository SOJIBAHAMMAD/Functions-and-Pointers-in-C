#include<stdio.h>
int main () {
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    double area_of_rectangledTriangle,area_of_circle,area_of_trapezium,area_of_square,area_of_rectangle;
    area_of_rectangledTriangle=(A*C)/2;
    area_of_circle=3.14159*C*C;
    area_of_trapezium=1.0/2.0*(A+B)*C;
    area_of_square=B*B;
    area_of_rectangle=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",area_of_rectangledTriangle,area_of_circle,area_of_trapezium,area_of_square,area_of_rectangle);
    return 0;
}