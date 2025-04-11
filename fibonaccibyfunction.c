#include<stdio.h>
int fibo(int n) {
    int a=1;
    int b=1;
    int nthFibonacci=1;

    for(int i=1;i<=n-2;i++) {
        nthFibonacci=a+b;
        a=b;
        b=nthFibonacci;
    }
    return nthFibonacci;
}
int main () {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int fibonacci=fibo(n);
    printf("The %dth fibonacci number is %d",n,fibonacci);
    return 0;
}