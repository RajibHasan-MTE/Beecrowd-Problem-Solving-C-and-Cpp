#include<stdio.h>

int main(){
    double a, b, c;
    double areaOfRectangled, areaOfRadius, areaOfTrapezium, areaOfSquare, areaOfRectangle;

    scanf("%lf %lf %lf", &a, &b, &c);

    areaOfRectangled = (a*c)/2;
    areaOfRadius = 3.14159*c*c;
    areaOfTrapezium = ((a+b)*c)/2;
    areaOfSquare = b*b;
    areaOfRectangle = a*b;
    printf("TRIANGULO: %.3lf\n", areaOfRectangled);
    printf("CIRCULO: %.3lf\n", areaOfRadius);
    printf("TRAPEZIO: %.3lf\n", areaOfTrapezium);
    printf("QUADRADO: %.3lf\n", areaOfSquare);
    printf("RETANGULO: %.3lf\n", areaOfRectangle);

    return 0;
}
