/************************************
Problem: Beecrowed-1035 Selection test 1
Link: https://judge.beecrowd.com/en/problems/view/1035
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
Date: 20/11/22, 1:00 AM
************************************/

#include<stdio.h>


int main(){
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if((B>C) && (D>A) && (C+D>A+B) && (C>=0 && D>=0) && (A%2==0)){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
return 0;
}
