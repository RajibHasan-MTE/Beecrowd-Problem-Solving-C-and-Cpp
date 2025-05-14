/************************************
Problem: beecrowd | 1011 Sphere
Link: https://judge.beecrowd.com/en/problems/view/1011
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 15/11/22, 2:00 AM
************************************/


#include<stdio.h>


int main(){
    double R, V;

    scanf("%lf", &R);
    V = (4/3.0)*3.14159*R*R*R;
    printf("VOLUME = %.3lf\n", V);

    return 0;

}
