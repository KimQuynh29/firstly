#include <stdio.h>
#include <math.h>

double compute(double x);

double compute(double x)
{
    return (pow(x,2)/2)*(1+pow(x,2)+0.1*pow(x,3));
}
int main()
{
    printf("sample test 1: %f\n", compute(0.5));
    printf("sample test 2: %f", compute(1.5));
    return 0;
}


