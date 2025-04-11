#include<stdio.h>
int main () {
    float n;
    scanf("%f",&n);
    int notes[6]={100,50,20,10,5,2};
    double coins[6]={1.00,0.50,0.25,0.10,0.05,0.01};
    int note_count;
    int cents=n*100;
    printf("NOTAS:\n");
    for(int i=0;i<6;i++) {
        note_count=cents/(notes[i]*100);
        cents=cents%(notes[i]*100);
        printf("%d nota(s) de R$ %d.00\n",note_count,notes[i]);
    }
    int coins_count;
    printf("MOEDAS:\n");
    for(int i=0;i<6;i++) { // Corrected loop condition
        coins_count=cents/(coins[i]*100);
        cents=cents%((int)(coins[i]*100));
        printf("%d moeda(s) de R$ %.2lf\n",coins_count,coins[i]);
    }
    return 0;
}

