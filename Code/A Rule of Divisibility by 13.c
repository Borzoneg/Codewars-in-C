#include <stdlib.h>

const int remainders[] = {1, 10, 9, 12, 3, 4};
const int remainders_lenght = 6;

void reverse_n(int *n, int lenght){
    int i, tmp;
    for(i=0; i<lenght/2; i++){
        tmp = n[lenght-i-1];
        n[lenght-i-1] = n[i];
        n[i] = tmp;
    }
}


int * from_int_to_array(long long n, int *lenght){
    char *str = malloc(sizeof(char)*n);
    int i, *n_array =  malloc(sizeof(int)*n);
    sprintf(str, "%lld", n);
    *lenght = 0;
    for(i=0; i<n; i++, (*lenght)++){
        if(str[i] == '\0')
            break;
        n_array[i] = (int)str[i] - 48;
    }
    return n_array;
}

long long thirt(long long num){
    int i,  *n, lenght;
    long long s = 0;

    n = from_int_to_array(num, &lenght);

    reverse_n(n, lenght);

    for(i=0; i<lenght; i++){
        s += remainders[i%remainders_lenght] * n[i];
    }

    if (s == num)
        return s;

    s =  thirt(s);
    return s;
}
