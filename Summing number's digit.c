#include <stdlib.h>

int sum_digits(int n) {
    n = abs(n);
    char *str = malloc(sizeof(char)*n);
    sprintf(str, "%d", n);
    int sum = 0, i;
    for(i=0; i<n; i++){
        if(str[i] == '\0')
            break;
        sum += (int)str[i] - 48;
    }
    return sum;
}