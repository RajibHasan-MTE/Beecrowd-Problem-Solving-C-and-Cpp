/************************************
Problem: beecrowd | 1010 Simple Calculate
Link: https://judge.beecrowd.com/en/problems/view/1010
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 15/11/22, 1:00 AM
************************************/

#include<stdio.h>


int main(){
    int code1, unit1, code2, unit2;
    float price1, price2, totalTaka;

    scanf("%d %d %f", &code1, &unit1, &price1);
    scanf("%d %d %f", &code2, &unit2, &price2);

    totalTaka = (unit1*price1) + (unit2*price2);

    printf("VALOR A PAGA: R$ %.2f\n", totalTaka);

return 0;
}



