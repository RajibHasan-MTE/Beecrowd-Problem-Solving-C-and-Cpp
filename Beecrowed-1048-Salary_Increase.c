/************************************
Problem: Beecrowed-1048 Salary increase
Link: https://judge.beecrowd.com/en/problems/view/1048
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan

************************************/

#include<stdio.h>


int main(){
    float n, s, sp;
    int p;
    char c = '%';
    scanf("%f", &n);
    if(n>=0.00 && n<=400.00){
        sp = (n*15)/100.00;
        s = sp+n;
        p = 15;
        s = sp+n;
    }
    else if(n>400.00 && n<=800.00){
        sp = (n*12)/100.00;
        s = sp+n;
        p = 12;
    }
    else if(n>800.00 && n<=1200.00){
        sp = (n*10)/100.00;
        s = sp+n;
        p = 10;
    }
    else if(n>1200.00 && n<=2000.00){
        sp = (n*7)/100.00;
        s = sp+n;
        p = 7;
    }
    else if(n>2000.00){
        sp = (n*4)/100.00;
        s = sp+n;
        p = 4;
    }

    printf("Novo salario: %.2f\n", s);
    printf("Reajuste ganho: %.2f\n", sp);
    printf("Em percentual: %d %c\n", p, c);



}


