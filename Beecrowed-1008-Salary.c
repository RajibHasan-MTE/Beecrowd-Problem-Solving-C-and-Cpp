
/************************************
Problem: beecrowd | 1008 Salary
Link: https://judge.beecrowd.com/en/problems/view/1008
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 15/11/22, 1:00 AM
************************************/

#include<stdio.h>

int main(){
    int number, hourNumber;
    float perHourSalary, salary;
    scanf("%d %d %f", &number, &hourNumber, &perHourSalary);
    salary = (hourNumber*perHourSalary);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;

}
