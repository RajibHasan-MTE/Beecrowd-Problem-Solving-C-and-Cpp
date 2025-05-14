/************************************
Problem: Beecrowed-1014 consumption
Link: https://judge.beecrowd.com/en/problems/view/114
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 15/11/22, 1:00 AM
************************************/

#include<stdio.h>

int main(){
    int x;
    float y, averageConsumption;

    scanf("%d %f", &x, &y);

    averageConsumption = x/y;

    printf("%.3f km/1", averageConsumption);
    return 0;


}
