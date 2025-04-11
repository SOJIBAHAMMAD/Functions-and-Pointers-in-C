#include<stdio.h>
int fact(int a) {
    int fact=1;
    for(int i=1;i<=a;i++) {
        fact=fact*i;
    }
    return fact;
}
int main () {
    int n;
    printf("Enter a integer number :");
    scanf("%d",&n);
    int factorial=fact(n);
    printf("The factorial of %d is :%d",n,factorial);
    return 0;
}