#include <stdio.h>

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    printf("fahr, celsius, celsius\n");
        
    while (fahr <= upper) {
        fahr = (9.0/5.0) * (celsius-32.0);
        printf("%3.0f|%10.1f|%10.3f\n", fahr, celsius, celsius);
        fahr = fahr + step;

    }
}