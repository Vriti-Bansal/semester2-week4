/*
 * Use the series approxiation to Pi 
 *  pi_n = 4 x ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - ... )
 * to approximate Pi
 * and examine how accurate it is as 
 * you increase the number of terms, n.
 * Enter the number of terms, n,  as a command line argument.
 * ie. measure error = abs( Pi-pi_n )
 * Hint: math library function fabs(x) gives you the absolute value as a double. 
 * Print out the number of terms, the computed value pi_n and the error
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

    double Pi = 3.1415926535897932;

    // Check command-line argument
    if (argc != 2) {
        printf("Usage: %s <number_of_terms>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return 1;
    }

    double pi_n = 0.0;

    for (int k = 0; k < n; ++k) {
        double term = 1.0 / (2.0 * k + 1.0);

        if (k % 2 == 0)
            pi_n += term;
        else
            pi_n -= term;
    }

    pi_n *= 4.0;

    double error = fabs(Pi - pi_n);

    printf("Number of terms: %d\n", n);
    printf("Computed pi_n:   %.15f\n", pi_n);
    printf("Error:           %.15f\n", error);

    return 0;
}
 