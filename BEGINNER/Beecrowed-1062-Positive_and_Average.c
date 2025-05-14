/************************************
Problem: Beecrowed-1061 Positives and Average
Link: https://judge.beecrowd.com/en/problems/view/1061
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
************************************/


#include<stdio.h>


int main(){
    float a, b, c, d, e, f;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    int counter=0;
    float sum=0;
    if(a>0){
        counter++;
        sum+=a;
    }
    if(b>0){
        counter++;
        sum+=b;
    }
    if(c>0){
        counter++;
        sum+=c;
    }
    if(d>0){
        counter++;
        sum+=d;
    }
    if(e>0){
        counter++;
        sum+=e;
    }
    if(f>0){
        counter++;
        sum+=f;
    }

    printf("%d valores positivos\n", counter);
    printf("%.1f\n", sum/counter);
    return 0;
}
