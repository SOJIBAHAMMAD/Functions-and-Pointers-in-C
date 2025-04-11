#include<stdio.h>
int power(int a,int b) {
    int pow=1;
    for(int i=1;i<=b;i++) {
        pow=pow*a;
    }
    return pow;
}
int main () {
    int a,b;
    printf("Enter two integer number :");
    scanf("%d %d",&a,&b);
    int result=power(a,b);
    printf("%d raiesd to the power %d is %d",a,b,result);
    return 0;
}