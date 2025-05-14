/************************************
Problem: Beecrowed-1035 Average 3
Link: https://judge.beecrowd.com/en/problems/view/1040
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 20/11/22, 1:00 AM
************************************/
#include<stdio.h>

int main(){
    float a, b, c, d, e;
    double avg1, avg2;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    avg1 = ((a*2)+(b*3)+(c*4)+d)/10;
    printf("Media: %.1lf\n", avg1);
    if(avg1 >= 7.0) printf("Aluno aprovado.\n");
    else if(avg1 < 5.0) printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        printf("Nota do exame: %.1lf\n", e);
        avg2 = (avg1+3)/2;
        if(avg2 >= 5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", avg2);
    }
    return 0;



}
