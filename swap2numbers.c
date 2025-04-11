#include<stdio.h>
void swap(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main () {
    int x=4,y=5;
    swap(&x,&y);
    printf("The value of x is :%d\n",x);
    printf("The value of Y is :%d",y);
    return 0;
}