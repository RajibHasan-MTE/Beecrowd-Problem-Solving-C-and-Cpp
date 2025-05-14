/************************************
Problem: Beecrowed-1013 the greatest
Link: https://judge.beecrowd.com/en/problems/view/1013
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 15/11/22, 1:00 AM
************************************/


#include<stdio.h>

int main(){
    int a, b, c, greatestValue;
    scanf("%d %d %d", &a, &b, &c);

    greatestValue = a;
    if(b>greatestValue)
        greatestValue = b;
    if(c>greatestValue)
        greatestValue = c;

    printf("%d eh o maior", greatestValue);
    return 0;

}
