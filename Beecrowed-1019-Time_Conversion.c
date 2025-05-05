/************************************
Problem: Beecrowed-1019 time converstion
Link: https://judge.beecrowd.com/en/problems/view/115
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 20/11/22, 1:00 AM
************************************/
#include<stdio.h>

int main(){
    int s;
    scanf("%d", &s);

    printf("%d:", s/3600);
    s = s%3600;
    printf("%d:", s/60);
    s = s%60;
    printf("%d\n", s);

    return 0;
}
