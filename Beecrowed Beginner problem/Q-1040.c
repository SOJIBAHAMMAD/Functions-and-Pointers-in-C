#include<stdio.h>
int main () {
    double N1,N2,N3,N4,exam_score,final_average;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    double average=(N1*2+N2*3+N3*4+N4)/10.0;
    printf("Media: %.1lf\n",average);
    if(average>=7.0) {
        printf("Aluno aprovado.\n");
    }
    else if(average>=5.0) {
        printf("Aluno em exame.\n");
        scanf("%lf",&exam_score);
        printf("Nota do exame: %.1lf\n",exam_score);
        if((average+exam_score)/2.0 >=5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",(average+exam_score)/2.0);
    }
    else {
        printf("Aluno reprovado.\n");
    }
    return 0;
}