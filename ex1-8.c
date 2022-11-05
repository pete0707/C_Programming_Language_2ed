#include <stdio.h>

main(){
    int input, numBlank, numTab, numNL;

    numBlank = 0;
    numNL = 0;
    numTab = 0;

    while(( input = getchar() ) != EOF) {
        if (input == ' ')
            numBlank++;
        else if (input == '\n')
            numNL++;
        else if (input == '\t')
            numTab++;       
    }
    printf("numBlank=%d, numNL=%d, numTab=%d\n", numBlank, numNL, numTab);

}