#include<stdio.h>
int add(int x, int y) {
    return x+y;
} 
int main () {
    int a,b;
    printf("Enter 1st and 2nd number :");
    scanf("%d %d",&a,&b);
    int sum = add(a,b);
    printf("The sum is :%d", sum);
    return 0;
}