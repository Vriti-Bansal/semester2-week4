
/* 
 * Write a program that reads in a line of text from the command line
 * 1. concatenates all the command line arguments into one string
 * 2. searches for the first occurrence of a given character
 * eg. use "The quick brown fox" on the command line and locate 'k'
 * Hint: argv is an array so you can use a simple for-loop
 * Hint: string library functions strcat() and strcspn() can be used
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

    if (argc < 3) {
        printf("Usage: %s <character> <sentence words...>\n", argv[0]);
        return 1;
    }

    char target = argv[1][0];   // character to search for
    char sentence[200] = "";

    // Concatenate all words from argv[2] onward
    for (int i = 2; i < argc; ++i) {
        strcat(sentence, argv[i]);

        // add space between words (except last one)
        if (i < argc - 1) {
            strcat(sentence, " ");
        }
    }

    printf("Full sentence: %s\n", sentence);

    // Find first occurrence of target character
    int position = strcspn(sentence, &target);

    if (position < strlen(sentence)) {
        printf("First occurrence of '%c' at index %d\n", target, position);
    } else {
        printf("Character '%c' not found.\n", target);
    }

    return 0;
}