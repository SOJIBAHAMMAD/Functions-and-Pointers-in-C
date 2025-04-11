#include<stdio.h>
int main () {
    int X,Y;
    scanf("%d %d",&X,&Y);
    if(X==1) {
        double total_price=4.00*Y;
        printf("Total: R$ %.2lf",total_price);
    }
    if(X==2) {
        double total_price=4.50*Y;
        printf("Total: R$ %.2lf",total_price);
    }
    if(X==3) {
        double total_price=5.00*Y;
        printf("Total: R$ %.2lf",total_price);
    }
    if(X==4) {
        double total_price=2.00*Y;
        printf("Total: R$ %.2lf",total_price);
    }
    if(X==5) {
        double total_price=1.50*Y;
        printf("Total: R$ %.2lf",total_price);
    }
    return 0;
}