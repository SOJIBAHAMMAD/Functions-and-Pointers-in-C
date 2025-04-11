#include<stdio.h>
int factorial (int x) {
    int fact=1;
    for(int i=2;i<=x;i++) {
        fact=fact*i;
    }
    return fact;
}
int main () {
    int n,r;
    printf("Enter number of n & r :");
    scanf("%d %d",&n,&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("The coombination of %d & %d is :%d",n,r,ncr);
    return 0;
}