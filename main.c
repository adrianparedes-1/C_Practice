#include <stdio.h>
#include <stdlib.h>

/*program to represent length of word in the form of a histogram
read anything that is not a letter as a * and place it a position to the right of the previous input
probably use the array index as position indicator

determine what is a word -- if character is not a \b, \t, blank, then it is a character that is part of a word


int main()
{
    char word [];
    char c = getchar(); //variable for the character we are reading at each loop instance
    char prev_input;

    for (int i = 0; i == EOF || (c != '\b' || c != '\t' || c != '\\' || c != ' '); i++) { //read till EOF or until a non character is reached

        word[i] = '*'; // store + in index i of array word
        c = getchar(); /*when you repeatedly call getchar() in a loop, it will read characters one at a time from the input stream,
        advancing to the next character with each call, until it reaches the end of the input or an error condition occurs.

        store the number of loop iterations to populate word array and that will be the amount of asterisks per word

        we will populate the array only when there is char that is not an escape sequence or a blank

        if (c != '\b' || c != '\t' || c != '\\' || c != ' ') { //storing character in word array if it means conditions
            word[i] = c;
        } else {

        }*/

int main () {

    char c;

    while ((c = getchar()) != EOF) {

        if (c != '\b' && c != '\t' && c != '\\' && c != ' ' && c != '\n') { //if it meets conditions print *
            putchar('*'); //putchar() will print character after previous one in loop
        } else
        putchar('\n'); //if not go to new line
    }
    return 0;
}
