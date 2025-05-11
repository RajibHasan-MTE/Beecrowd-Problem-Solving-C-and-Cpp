
/************************************
Problem: Beecrowed-1046-Game time
Link: https://judge.beecrowd.com/en/problems/view/1046
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan

************************************/

#include<stdio.h>



int main(){
    while(1){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a==b) printf("O JOGO DUROU %d HORA(S)\n", 0+24);
    else if(a>b) printf("O JOGO DUROU %d HORA(S)\n", (b+24)-a);
    else if(a<b) printf("O JOGO DUROU %d HORA(S)\n", b-a);
    }
return 0;
}
