/************************************
Problem: Beecrowed-1067_Odd Numbers
Link: https://judge.beecrowd.com/en/problems/view/1067
Beecrowed profile: https://judge.beecrowd.com/en/profile/632822
Author: Rajib Hasan
************************************/


#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i%2>0) printf("%d\n", i);
    }

return 0;


}

