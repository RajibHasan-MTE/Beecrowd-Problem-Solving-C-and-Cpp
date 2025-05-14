/************************************
Problem: Beecrowed-1067_Odd Numbers
Link: https://judge.beecrowd.com/en/problems/view/1067
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
************************************/


#include<stdio.h>

int main(){
    int t, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        if(n == 0) printf("NULL\n");
        else if(n>0){
            if(n%2 == 0) printf("EVEN POSITIVE\n");
            else printf("ODD POSITIVE\n");
        }
        else if(n<0){
            if(n%2 == 0) printf("EVEN NEGATIVE\n");
            else printf("ODD NEGATIVE\n");
        }
    }
}
