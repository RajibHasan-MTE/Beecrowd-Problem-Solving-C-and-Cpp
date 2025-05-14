/************************************
Problem: Beecrowed-1035 Average 3
Link: https://judge.beecrowd.com/en/problems/view/1040
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 20/11/22, 1:00 AM
************************************/


#include<stdio.h>

int main(){
    int a, b, c, temp, i, j, k;
    scanf("%d %d %d", &a, &b, &c);
    i = a;
    j = b;
    k = c;

    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a>c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b>c){
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d", i, j, k);
    return 0;
}
