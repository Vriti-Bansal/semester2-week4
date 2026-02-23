
/*
Name:Vriti Bansal
Student ID:201914016
*/

#include <stdio.h>
#include <string.h>
/* argc= number of command line arguments
   argv= array of command line arguments
   first argument is alwyays the name of the program 
*/
int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    //initializing the string to an empty string
    char string[100]=""; 
    for(int i=1; i<argc; i++){
        strcat(string,argv[i]);
        if(i<argc-1){       //if its not the last argument then add "-"
            strcat(string,"-");
        }
    }       

    printf("%s\n",string); // use only this single print statement in your submitted code

    return 0;
}