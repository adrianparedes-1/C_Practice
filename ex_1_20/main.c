// this program will replace the tab character with the amount of blanks that would represent a 'tab'. The tab stop (end of blanks) will be determined by a fixed number n (symbolic parameter) as the number of blanks to represent a tab will be the same regardless of any situation.

// a tab can be represented by 4 blanks
#include <stdio.h>

#define TAB_STOP 4 //symbolic parameter that determines when a tab stop will happen

int main() {
    int c; // Use int instead of char to correctly handle EOF

    //The getchar() function returns an int, not a char. It reads a character from the input stream and returns its ASCII value as an integer. The reason for using int is to accommodate the full range of possible character values (0 to 255) as well as the special value EOF.

     while ((c = getchar()) != EOF) {
        if (c == '\t') {
            for (int i = 0; i < TAB_STOP; i++) { // we use less than bc i starts at 0
                putchar(' ');
            }
        } else putchar(c); //print character unchanged
    }
    return 0;
}
