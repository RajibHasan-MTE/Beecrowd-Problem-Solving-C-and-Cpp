/************************************
Problem: Beecrowed-1044-Triangle Types
Link: https://judge.beecrowd.com/en/problems/view/1045
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan

************************************/
#include<stdio.h>


int main(){
    while(1){
    double a, b, c, temp, i, j, k;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a<b){temp=a; a=b; b=temp;}
    if(a<c){temp=a; a=c; c=temp;}
    if(b<c){temp=b; b=c; c=temp;}
    i = a*a;
    j = b*b;
    k = c*c;

    if(a >= b+c) printf("NAO FORMA TRIANGULO\n");
    else{
        if(i == j+k) printf("TRIANGULO RETANGULO\n");
        if(i >  j+k) printf("TRIANGULO OBTUSANGULO\n");
        if(i <  j+k) printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c) printf("TRIANGULO EQUILATERO\n");
        else if(a==b || b==c || c==a) printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}
