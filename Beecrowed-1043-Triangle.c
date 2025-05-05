/************************************
Problem: Beecrowed-1035 Average 3
Link: https://judge.beecrowd.com/en/problems/view/1040
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 20/11/22, 1:00 AM
************************************/

#include<stdio.h>
int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if(a+b>c && a+c>b && c+b>a) printf("Perimetro = %.1f\n", (a+b+c));
    else printf("Area = %.1f\n", ((a+b)*c)/2);
return 0;

}

