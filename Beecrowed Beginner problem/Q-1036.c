#include<stdio.h>
#include<math.h>
int main () {
    double a,b,c,X;
    scanf("%lf %lf %lf",&a,&b,&c);
    float R1,R2;
    X=sqrt((b*b)-4*a*c);
      if(a==0 || ((b*b)-4*a*c)<0) {
        printf("Impossivel calcular\n");
    } else {
    R1=((-b+X)/(2*a));
    R2=((-b-X)/(2*a));
    printf("R1 = %.5lf\n",R1);
    printf("R2 = %.5lf\n",R2);
    }
    return 0;
}