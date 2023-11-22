// this program will replace strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. It will also determine whether to use a blank or tab character depending on the distance to a tab stop.

// a tab can be represented by 4 blanks
#include <stdio.h>

#define TAB_STOP 4 //symbolic parameter that determines when a tab stop will happen

int main() {
    int c; // Use int instead of char to correctly handle EOF
    int count;

     while ((c = getchar()) != EOF) {
        if (c == ' ') {
            count++;
            if (count % TAB_STOP == 0) { //if count is a multiple of 4
                putchar('\t');
                count = 0; //reset
            } else {
                for (int i = 0; i < count; i++) {
                    putchar(' ');
                    }
                    count = 0; // reset
                }
        } putchar(c); //print character unchanged
    }
    return 0;
}
