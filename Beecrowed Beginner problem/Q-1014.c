#include<stdio.h>
int main () {
    int x;
    printf("Enter distance in km :");
    scanf("%d",&x);
    float y;
    printf("Enter amount of fuel :");
    scanf("%f",&y);
    double average_consumption=x/y;
    printf("%.3f km/l",average_consumption);
    return 0;
}