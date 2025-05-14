/************************************
Problem: Beecrowed-1078 Remaining 2
Link: https://judge.beecrowd.com/en/problems/view/1078
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", i, n, i*n);
    }



return 0;
}
