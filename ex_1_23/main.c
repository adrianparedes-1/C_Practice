#include <stdio.h>
#include <stdlib.h>

/* this one was pretty difficult and was not able to figure it out on my own.
I used the concept of fixed-size buffer to allocate the memory in the meantime while I learn dynamic memory allocation.
Learning the while loop that reads until EOF and \n is also useful. I was struggling with skipping the comments.
The flags allowed for branching within the loop which is not something I had thought about.
The reduction of the index i also was smart as it will reset the position in the array every time something is skipped. */

//write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments do not nest.

#define WORDSIZE 30

int main() {
    char word[WORDSIZE + 1];  // +1 for null character

    int c;
    int i = 0;
    int inComment = 0; // flag to track whether we are currently in a comment
    int inString = 0;  // Flag to track whether currently inside a string literal or character constant

    while ((c = getchar()) != EOF) {
        if (!inComment && !inString) {
                /*this will be executed only when the program is not inside a comment and not inside a string literal or character constant.
                This is important because you want to ignore characters that are part of comments or strings while processing the code.*/
            word[i] = c;

            // Check for the beginning of a comment
            if (c == '/' && (c = getchar()) == '/') { //one line comment
                i--;
                while ((c = getchar()) != EOF && c != '\n');  // Skip characters until the end of the line -- this will read through all the characters in the line until \n. Once we satisfy either of the conditions, we stop looping.
            } else if (c == '/' && (c = getchar()) == '*') { //multiple lines comment
                i--;
                inComment = 1; // flag for comment
            } else if (c == '\"') { // " " string case
                inString = 1; //flag for string literal
            } else if (c == '\'') { // ' ' char case
                inString = 1;
            }
        } else { //if we are in a comment or string, check if we are at the end
            if (inComment && c == '*' && (c = getchar()) == '/') { //end of multiple line comment
                inComment = 0;
            } else if (inString && c == '\"') { // end of  " " string
                inString = 0;
            } else if (inString && c == '\'') { // end of ' ' char
                inString = 0;
            }
        }

        i++;

        if (i == WORDSIZE) { //if we increase the size of the fixed-size buffer, add the null character and print the word array
            word[i] = '\0';
            printf("%s", word);
            i = 0;
        }
    }

    return 0;
}

