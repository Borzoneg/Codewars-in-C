#include <stdio.h>
#include "Counting-duplicates.c"
#include "Summing-number's-digit.c"
#include "Divisibility-by-13.c"
#include "Bouncing-balls.c"
#include "Number-prime.c"

int main() {


    printf("%d\n", duplicate_count("aabBcde")); //expected = 2
    printf("%d\n", sum_digits(10)); // expected = 1
    printf("%lld\n", thirt(1234567)); // expected = 87
    printf("%d\n", bouncingBall(3, 0.66, 1.5));
    printf("%d\n", is_prime(17099));
    return 0;
}
