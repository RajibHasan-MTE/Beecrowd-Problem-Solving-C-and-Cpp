#include<stdio.h>

int main(){
    int a, b, c, greatestValue;
    scanf("%d %d %d", &a, &b, &c);

    greatestValue = a;
    if(b>greatestValue)
        greatestValue = b;
    if(c>greatestValue)
        greatestValue = c;

    printf("%d eh o maior", greatestValue);
    return 0;

}
