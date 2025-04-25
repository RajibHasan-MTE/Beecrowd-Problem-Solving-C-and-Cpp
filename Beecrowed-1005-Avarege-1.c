// Problem: Beecrowed-1005 - Average 1
// Link: https://judge.beecrowd.com/en/problems/view/1005
// Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
// Author: Rajib Hasan
// Date: 3/11/22, 12:00 AM
#include<stdio.h>


int main(){
    double a, b, media;
    scanf("%lf %lf", &a, &b);
    media = ((a*3.5)+(b*7.5))/(3.5+7.5);
    printf("MEDIA = %.5lf\n", media);
    return 0;

}

