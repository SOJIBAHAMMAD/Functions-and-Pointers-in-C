// #include<stdio.h>
// void print_in_order(int a,int b,int c) {
//     int min,mid,max;
//     if(a<b && a<c) {
//         min=a;
//         if(b>c) {
//             max=b;
//             mid=c;
//         } else {
//             max=c;
//             mid=b;
//         }
//     }
//     if(b<a && b<c) {
//         min=b;
//         if(a>c) {
//             max=a;
//             mid=c;
//         } else {
//             max=c;
//             mid=a;
//         }
//     }
//     else if(a<b && a<c) {
//         min=a;
//         if(b>c) {
//             max=b;
//             mid=c;
//         } else {
//             max=c;
//             mid=b;
//         }
//     }
//     else {
//         min=c;
//         if(b>a) {
//             max=b;
//             mid=a;
//         } else {
//             max=a;
//             mid=b;
//         }
//     }
//     printf("%d\n%d\n%d\n",min,mid,max);
// }
// int main () {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     print_in_order(a,b,c);
//     printf("\n%d\n%d\n%d\n",a,b,c);
//     return 0;
// }
#include<stdio.h>
void increasing_order(int x,int y,int z) {
    int temp;
    if(x>y) {
        temp=x;
        x=y;
        y=temp;
    }
    if(x>z) {
        temp=x;
        x=z;
        z=temp;
    }
    if(y>z) {
        temp=y;
        y=z;
        z=temp;
    }
    printf("%d\n%d\n%d\n",x,y,z);
} 
    int main () {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    increasing_order(x,y,z);
    printf("\n%d\n%d\n%d\n",x,y,z);
    return 0;
}