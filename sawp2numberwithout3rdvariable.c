#include<stdio.h>
int main () {
    int a,b;
    printf("Enter number of a & b :");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swap value of a is :%d\n",a);
    printf("The swap value of b is :%d",b);
    return 0;
}