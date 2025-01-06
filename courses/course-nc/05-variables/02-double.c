
#include <stdio.h>

int main() {

    // Double
    // By printer using %lf (Long float)
    
    double num01;
    num01 = 1.2;
    printf("Number double 01: %lf \n", num01);

    double num02 = 5.8;
    printf("Number double 02: %lf \n", num02);

    double num03 = -79.0;
    num03 = 1.56;
    printf("Number double 03: %lf \n", num03);

    printf("Numbers whit decimals 0: %lf - %lf - %lf \n", num01, num02, num03);

    // I can %g to remove decimals
    printf("Numbers whitout decimals 0: %g - %g - %g \n", num01, num02, num03);
}
