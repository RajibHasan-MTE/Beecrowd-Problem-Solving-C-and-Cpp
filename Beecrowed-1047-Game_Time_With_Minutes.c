/************************************
Problem: Beecrowed-1046-Game time
Link: https://judge.beecrowd.com/en/problems/view/1046
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan

************************************/

#include<stdio.h>


int main(){
    while(1){
    int h1, m1, h2, m2, mm1, mm2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    mm1 = (h1*60)+m1;
    mm2 = (h2*60)+m2;
    if(mm1 == mm2){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(mm1>mm2){
        int time = (mm2+(24*60))-mm1;
        int h = time/60;
        time = time%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, time);
    }
    else if(mm1<mm2){
        int time = mm2-mm1;
        int h = time/60;
        time = time%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, time);
    }
    }
return 0;
}

