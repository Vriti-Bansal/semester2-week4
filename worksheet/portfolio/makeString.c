
/*
Name:Vriti Bansal
Student ID:201914016
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char string[100]; 

    strcpy(string,argv[1]);
    strcat(string,"-");
    strcat(string,argv[2]);
    strcat(string,"-");
    strcat(string,argv[3]);

    printf("%s\n",string); // use only this single print statement in your submitted code

    return 0;
}