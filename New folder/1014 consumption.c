#include<stdio.h>

int main(){
    int x;
    float y, averageConsumption;

    scanf("%d %f", &x, &y);

    averageConsumption = x/y;

    printf("%.3f km/1", averageConsumption);
    return 0;


}
