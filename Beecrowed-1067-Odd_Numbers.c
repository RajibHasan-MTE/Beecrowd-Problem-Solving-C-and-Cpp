/************************************
Problem: Beecrowed-1066 Even, Odd, Positive and Negative
Link: https://judge.beecrowd.com/en/problems/view/1066
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
************************************/
#include<stdio.h>


int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int even=0, odd=0, positive=0, negative=0;
    if(a>0) positive++;
    if(b>0) positive++;
    if(c>0) positive++;
    if(d>0) positive++;
    if(e>0) positive++;

    if(a<0) negative++;
    if(b<0) negative++;
    if(c<0) negative++;
    if(d<0) negative++;
    if(e<0) negative++;

    if(a%2 == 0) even++;
    else odd++;
    if(b%2 == 0) even++;
    else odd++;
    if(c%2 == 0) even++;
    else odd++;
    if(d%2 == 0) even++;
    else odd++;
    if(e%2 == 0) even++;
    else odd++;

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;

}
