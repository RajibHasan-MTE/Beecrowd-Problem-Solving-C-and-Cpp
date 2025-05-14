/************************************
Problem: Beecrowed-1020 age in days
Link: https://judge.beecrowd.com/en/problems/view/115
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 20/11/22, 1:00 AM
************************************/
#include<stdio.h>


int main(){
    int days;
    scanf("%d", &days);

    printf("%d ano(s)\n", days/365);
    days = days%365;
    printf("%d mes(es)\n", days/30);
    days = days%30;
    printf("%d dia(s)\n", days);

    return 0;



}
