/************************************
Problem: Beecrowed-1061 Event Time
Link: https://judge.beecrowd.com/en/problems/view/1061
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
************************************/

#include<stdio.h>


int main(){
    int d1, h1, m1, s1, d2, h2, m2, s2;
    scanf("%*s %d", &d1);
    scanf("%d %*s %d %*s %d", &h1, &m1, &s1);

    scanf("%*s %d", &d2);
    scanf("%d %*s %d %*s %d", &h2, &m2, &s2);

    int ds1 = s1 + (m1*60) + (h1*3600) + (d1*(24*3600));
    int ds2 = s2 + (m2*60) + (h2*3600) + (d2*(24*3600));

    int ds = ds2 - ds1;
    int day, h, m, s;
    day = ds/86400;
    ds = ds%86400;
    h = ds/3600;
    ds = ds%3600;
    m = ds/60;
    ds = ds%60;

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", ds);
   return 0;
}

