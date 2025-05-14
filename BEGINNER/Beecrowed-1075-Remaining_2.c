/************************************
Problem: Beecrowed-1075 Remaining 2
Link: https://judge.beecrowd.com/en/problems/view/1067
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=10000; i++){
        if(i%n==2) printf("%d\n", i);
    }


return 0;
}
