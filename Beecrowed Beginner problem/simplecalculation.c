#include<stdio.h>
int main () {
    int productcode,productunit,_productcode,_productunit;
    double price,_price,TotalAmount;
    scanf("%d %d %lf %d %d %lf",&productcode,&productunit,&price,&_productcode,&_productunit,&_price);
    TotalAmount=(productunit*price)+(_productunit*_price);
    printf("VALOR A PAGAR: R$ %.2lf\n",TotalAmount);
    return 0;
}