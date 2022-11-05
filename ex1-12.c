#include <stdio.h>

#define IN  1       //inside a word
#define OUT 0       //outside a word
main() {
    int c, state;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {   
            state = OUT;
        }
        else if (state == OUT){             // normal char and (state==out) means it's a new word 
            putchar('\n');
            putchar(c);
            state = IN;
        }
        else
            putchar(c);                     //normal char and state==IN >> a word is on its way printing
    }
}