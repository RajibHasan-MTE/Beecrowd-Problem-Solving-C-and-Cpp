/************************************
Problem: Beecrowed-1044-mulitples
Link: https://judge.beecrowd.com/en/problems/view/1044
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan

************************************/



#include<stdio.h>


int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a%b == 0 || b%a == 0) printf("Sao Multiplos\n");
    else printf("Nao sao Multiplos\n");

    return 0;
}
