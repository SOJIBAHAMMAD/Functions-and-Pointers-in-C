#include<stdio.h>
int main () {
    double A,B,avg;
    scanf("%lf %lf",&A,&B);
    avg = ((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("MEDIA = %.5lf\n",avg);
    return 0;
}