#include <stdio.h>

main() {
    int c;
    int cnt = 0;

    //c=getchar();
    while( c = getchar() ) {
        //check = (c==EOF);
        cnt+=1;
        printf(" %d, cnt = %d, c = %d\n", c==EOF, cnt, c);
    }
}