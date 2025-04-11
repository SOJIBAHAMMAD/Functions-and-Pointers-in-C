#include<stdio.h>
int main () {
    int a,b;
    printf("Enter number of a & b :");
    scanf("%d %d",&a,&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The swap value of a is :%d\n",a);
    printf("The swap value of b is :%d",b);
    return 0;
}