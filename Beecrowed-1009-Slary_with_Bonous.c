
/************************************
Problem: beecrowd | 1009 Salary with Bonus
Link: https://judge.beecrowd.com/en/problems/view/1009
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 15/11/22, 1:00 AM
************************************/
#include<stdio.h>


int main(){
    char firstName;
    double fixedSalary, totalSell, totalSalary;
    scanf("%s", &firstName);
    scanf("%lf %lf", &fixedSalary, &totalSell);
    totalSalary = fixedSalary+(0.15*totalSell);
    printf("TOTAL = R$ %.2lf\n", totalSalary);
    return 0;
}
