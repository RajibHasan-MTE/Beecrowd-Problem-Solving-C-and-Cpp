#include<stdio.h>

int main(){
    int time, averageSpeed;
    scanf("%d %d", &time, &averageSpeed);

    double fuelSpent = ((time*averageSpeed)/12.0);

    printf("%.3f\n", fuelSpent);

    return 0;

}
