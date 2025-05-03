#include<stdio.h>

int main(){
    int a, b, s, greatestNumber;
    scanf("%d %d %d", &a, &b, &s);


    greatestNumber = (a+b+abs(a-b))/2;
    printf("%d eh o maior\n", greatestNumber);
    return 0;


}
