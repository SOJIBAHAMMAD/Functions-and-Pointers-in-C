#include<stdio.h> //call by referance.
void fun(int *ptrx,int *ptry) {
  *ptrx=20,*ptry=10;
  return;
}
int main () {
    int x=10,y=20;
    fun (&x,&y);
    printf("x=%d\ny=%d",x,y);
    return 0;
}
// #include<stdio.h> //call by value.
// void fun(int x,int y) {
//     x=20,y=10;
//     return;
// }
// int main () {
//     int x=10,y=20;
//     fun(x,y);
//     printf("x=%d\ny=%d",x,y);
//     return 0;
// }