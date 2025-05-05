/************************************
Problem: Beecrowed-1014 Distance and two points
Link: https://judge.beecrowd.com/en/problems/view/115
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 20/11/22, 1:00 AM
************************************/

#include<stdio.h>

int main(){
    int time, averageSpeed;
    scanf("%d %d", &time, &averageSpeed);

    double fuelSpent = ((time*averageSpeed)/12.0);

    printf("%.3f\n", fuelSpent);

    return 0;

}



