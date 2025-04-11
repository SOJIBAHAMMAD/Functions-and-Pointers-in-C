#include<stdio.h>
int main () {
    int n,year,months,days;
    scanf("%d",&n);
    int x,y;
    year=n/365;
    x=n%365;
    months=x/30;
    y=x%30;
    days=y;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",days);
    return 0;
}