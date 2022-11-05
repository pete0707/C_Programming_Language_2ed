#include <stdio.h>

main(){
    int input, prevIsBlank;


    while(( input = getchar() ) != EOF) {
        if (input == ' ')
            if (prevIsBlank == 0) {   
                putchar(input);
                prevIsBlank = 1;    //true
            }
            else 
                ;
        else{
            putchar(input);
            prevIsBlank = 0;
        }
    }
    
}