#include<stdio.h>
int main () {
    int N,N1,N2;
    scanf("%d",&N);
    int  hours,minutes,seconds;
    hours=N/3600;
    N1=N%3600;
    minutes=N1/60;
    N2=N1%60;
    printf("%d:%d:%d\n",hours,minutes,N2);
    return 0;
}