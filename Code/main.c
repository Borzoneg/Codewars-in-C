#include <stdio.h>
#include "counting duplicates.c"
#include "Summing number's digit.c"
#include "A Rule of Divisibility by 13.c"
int main() {


    printf("%d\n", duplicate_count("aabBcde")); //expected = 2
    printf("%d\n", sum_digits(10)); // expected = 1
    printf("%lld\n", thirt(1234567)); // expected = 87

    return 0;
}
