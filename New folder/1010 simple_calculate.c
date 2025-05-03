#include<stdio.h>


int main(){
    int code1, unit1, code2, unit2;
    float price1, price2, totalTaka;

    scanf("%d %d %f", &code1, &unit1, &price1);
    scanf("%d %d %f", &code2, &unit2, &price2);

    totalTaka = (unit1*price1) + (unit2*price2);

    printf("VALOR A PAGA: R$ %.2f\n", totalTaka);
return 0;
}
