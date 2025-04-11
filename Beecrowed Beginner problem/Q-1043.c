#include<stdio.h>
int main () {
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);
    if ((A+B>C) && (B+C>A) && (A+C>B)) {
        double x=A+B+C;
        printf("Perimetro = %.1lf\n",x);
    } else {
        double trapezium_area=1.0/2*(A+B)*C;
        printf("Area = %.1lf\n",trapezium_area);
    }
    return 0;
}