#include <stddef.h>

int maxSequence(const int* array, size_t n) {
    int i, j, sum = 0, max = 0;
    for(i=0; i<n; i++, sum=0){
        for(j=i; j<n; j++){
            sum += array[j];
            if(sum > max)
                max = sum;
        }
    }
    return max;
}
