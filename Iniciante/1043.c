#include <stdio.h>
 
int main() {
    double A, B, C, perimetro, area;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    perimetro = A + B + C;
    area = ((A + B) * C) / 2;

    if (A < B + C && B < A + C && C < A + B) {
        printf("Perimetro = %.1lf\n", perimetro);
    } else {
        printf("Area = %.1lf\n", area);
    }
    
    return 0;
}