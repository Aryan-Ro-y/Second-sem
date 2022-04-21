#include <stdio.h>

#include <math.h>

int main()

{
    double x, sine_function;
    printf("Enter the value between 0 and 1: ");
    scanf("%lf", &x);
    if (x > 1)
        printf("ErRxR.... Number's not between 0 and 1... also");
    else
        sine_function = sin(x);
        printf(" the sine function of the value %lf is %lf ", x, sine_function);
return 0;

}