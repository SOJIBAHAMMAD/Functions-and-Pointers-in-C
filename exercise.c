// //write function to calculate area of a square , a circle and a rectangle
// #include<stdio.h>
// int main () {
//     float side=12.00;
//     float rad=8.00;
//     float a=5.00,b=10.00;
//     float square=side*side;
//     float circle=3.1416*rad*rad;
//     float rectangle=a*b;
//     printf("The area of square is :%f\n",square);
//     printf("The area of circle is :%f\n",circle);
//     printf("The area of rectangle is :%f",rectangle);
//     return 0;
// }
#include<stdio.h>
float squareArea(float x) {
    return x*x;
}
float circleArea(float y) {
    return 3.1416*y*y;
}
float rectangleArea(float m,float n) {
    return m*n;
}
int main () {
    float x=12.00,y=8.00,m=5.00,n=10.00;
    float SqArea=squareArea(x);
    float CriArea=circleArea(y);
    float RecArea=rectangleArea(m,n);
    printf("The area of a square is :%f\n",SqArea);
    printf("The area of a circle is :%f\n",CriArea);
    printf("The area of a rectangle is :%f",RecArea);
    return 0;
}