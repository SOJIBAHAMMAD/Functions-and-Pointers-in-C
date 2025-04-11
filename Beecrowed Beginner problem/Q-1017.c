#include<stdio.h>
int main () {
    double hours,km;
    scanf("%lf %lf",&hours,&km);
    double liters;
    liters=((hours*km)/12);
    printf("%.3f\n",liters);
    return 0;
}