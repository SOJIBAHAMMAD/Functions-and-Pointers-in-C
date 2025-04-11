#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    int banknote[7]={100,50,20,10,5,2,1};
    int note_count;
    for(int i=0;i<7;i++) {
        note_count=n/banknote[i];
        n=n%banknote[i];
        printf("%d nota(s) de R$ %d,00\n",note_count,banknote[i]);
    }
    return 0;
}