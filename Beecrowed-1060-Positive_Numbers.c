/************************************
Problem: Beecrowed-1060
Link: https://judge.beecrowd.com/en/problems/view/1060
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
************************************/
#include<stdio.h>


int main(){
    float a, b, c, d, e, f;
    int co;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    if(a>0.00) co++;
    if(b>0.00) co++;
    if(c>0.00) co++;
    if(d>0.00) co++;
    if(e>0.00) co++;
    if(f>0.00) co++;

    printf("%d valores positivos\n", co);



}
