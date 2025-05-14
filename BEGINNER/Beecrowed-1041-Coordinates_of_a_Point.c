/************************************
Problem: beecrowd | 1041 Coordinates of a Point
Link: https://judge.beecrowd.com/en/problems/view/1040
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 20/11/22, 1:00 AM
************************************/


#include<stdio.h>


int main(){
    while(1){
    float x, y;
    scanf("%f %f", &x, &y);
    if(x == 0.0){
        if(y == 0.0) printf("Origem\n");
        else printf("Eixo Y\n");
    }
    else if(y == 0.0){
        if(x == 0.0) printf("Origem\n");
        else printf("Eixo X\n");
    }
    else if(x>0.0 && y>0.0) printf("Q1\n");
    else if(x<0.0 && y>0.0) printf("Q2\n");
    else if(x<0.0 && y<0.0) printf("Q3\n");
    else if(x>0.0 && y<0.0) printf("Q4\n");
    }
return 0;
}
