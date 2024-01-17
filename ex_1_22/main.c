#include <stdio.h>
#include <stdlib.h>

//turn long lines into shorter lines
// make this transition at the end of the long line
//determine the length of a long line and how it is going to be folded

#define LONGLINE 20
#define SHORTLINE 5

int main()
{
    int c;
    int i, j = 0;
    char word[LONGLINE + 1];  // +1 for the null terminator

    /* In C, when you declare an array without specifying a size, the compiler requires you to initialize it with a specific set of values, or you have to dynamically allocate memory for it using functions like malloc.
    However, in this specific case, where you want to read input characters into an array and print them, it's more practical to define the array size explicitly.
    Setting the array size to LONGLINE + 1 allows you to store up to LONGLINE characters in the word array, and the additional space is reserved for the null terminator '\0'.
    The null terminator is a special character used to denote the end of a string in C.
    If you just declare the array without specifying a size, like char word[];, the compiler won't know how much space to allocate for the array.
    This approach is generally not suitable for this kind of task because you need a fixed-size buffer to read and process input characters efficiently.
    Therefore, specifying the size, as you did with char word[LONGLINE + 1];, is a more practical choice in this context.*/


    // i is used to keep track of the current position in the word array
    //j is used to print characters in word array

    while ((c = getchar()) != EOF) { //read until EOF

        if (c != ' ' && c != '\n') { // if it is not a blank space, populate array at index i
            word [i] = c;
            i++;

            if (i >= LONGLINE) { //meaning if the character count is >= long line
                    word[i] = '\0';
                    j = 0;

            //repeat until word has been printed -- which means it will be when we reach '\0' -- printing loop
                while (word[j] != '\0') {

                    putchar(word[j]);

                    if ((j + 1) % SHORTLINE == 0) { // j + 1 ensures that the tab character is printed after a short line is reached.
                            // If j alone is used, it will insert tab after every short line but it would start at 0th position so it would start with 'tab' then print the characters until short line is reached
                        putchar('\t');
                    }
                    j++;
                }
            }
        } else {
            putchar('\n'); //once we reach a blank space, start a new line and reset counter
            i = 0;
        }
    }
    return 0;
}
