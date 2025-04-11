#include<stdio.h>
int cal(int a,int b,int* sum,int* prod,int* avg) {
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
    return sum,prod,avg;
}
int main () {
    int a,b,sum,prod,avg;
    printf("Enter the integer number of a & b :");
    scanf("%d %d",&a,&b);
    cal(a,b,&sum,&prod,&avg);
    printf("Sum=%d\nProd=%d\nAvg=%d",sum,prod,avg);
    return 0;
}