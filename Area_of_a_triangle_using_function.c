#include<stdio.h>

double triangleArea( double l , double h);

int main() {
    double length,height;
    printf("Enter the value of length :");
    scanf("%lf",&length);
    printf("Enter the value of height :");
    scanf("%lf",&height);

    double result = triangleArea(length,height);
    printf("The Area of the Triangle : %.2lf",result);
    return 0;
}

double triangleArea( double l , double h){
    return 0.5*l*h;
}