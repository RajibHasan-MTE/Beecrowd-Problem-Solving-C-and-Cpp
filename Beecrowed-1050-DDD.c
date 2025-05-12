/************************************
Problem: Beecrowed-1050
Link: https://judge.beecrowd.com/en/problems/view/1050
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan

************************************/


#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n == 61) printf("Brasilia\n");
    else if(n == 71) printf("Salvador\n");
    else if(n == 11) printf("Sao Paulo\n");
    else if(n == 21) printf("Rio de Janeiro\n");
    else if(n == 32) printf("Juiz de Fora\n");
    else if(n == 19) printf("Campinas\n");
    else if(n == 27) printf("vitoria\n");
    else if(n == 31) printf("Belo Horizonte\n");
    else printf("%d nao cadastrado\n", n);

    return 0;



}
