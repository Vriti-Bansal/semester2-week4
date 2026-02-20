/*
#include <stdio.h>

int main( void ) {

    // define suitable data
    int num1, num2, sum;

    // use scanf to read from the terminal
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;  

    // print the output from scanf and the data values 
    printf("The sum of %d and %d is %d\n", num1, num2, sum);


    return 0;
}
*/

#include <stdio.h>

int main(void) {

    int num1, num2, sum;
    char input[100];   

    printf("Enter two integers: ");

    fgets(input, 100, stdin);

    sscanf(input, "%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}