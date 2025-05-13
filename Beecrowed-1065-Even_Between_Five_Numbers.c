/************************************
Problem: Beecrowed-1061 Even Between Five Numbers
Link: https://judge.beecrowd.com/en/problems/view/1065
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
************************************/

#include<stdio.h>

int main(){
    float a, b, c, d, e;

    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    int aa=a;
    int bb=b;
    int cc=c;
    int dd=d;
    int ee=e;

    int even=0;
    if(aa*100%200 == 0) even++;
    if(bb*100%200 == 0) even++;
    if(cc*100%200 == 0) even++;
    if(dd*100%200 == 0) even++;
    if(ee*100%200 == 0) even++;


    printf("%d valores pares", even);
    return 0;

}
