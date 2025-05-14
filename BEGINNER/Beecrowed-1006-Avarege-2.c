// Problem: Beecrowed-1005 - Average 1
// Link: https://judge.beecrowd.com/en/problems/view/1005
// Beecrowed profile: https://judge.beecrowd.com/en/problems/view/1006
// Author: Rajib Hasan
// Date: 4/11/22, 1:00 AM


#include<stdio.h>


int main(){
    double a, b, c, media;
    scanf("%lf %lf %lf", &a, &b, &c);
    media = ((a*2)+(b*3)+(c*5))/(2+3+5);
    printf("MEDIA = %.1lf\n", media);
    return 0;


}
