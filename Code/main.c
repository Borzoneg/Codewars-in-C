#include <stdio.h>
#include "Counting-duplicates.c"
#include "Summing-number's-digit.c"
#include "Divisibility-by-13.c"
#include "Bouncing-balls.c"
#include "Number-prime.c"
#include "Valid-parentheses.c"
#include "Maximum-subarray-sum.c"
#include "Int32 to IPv4.c"

int main() {
    char output[100];

    printf("The duplicates char in the string are: %d\n", duplicate_count("aabBcde")); //expected = 2
    printf("The sum of the digits is: %d\n", sum_digits(10)); // expected = 1
    printf("The stationary number is: %lld\n", thirt(1234567)); // expected = 87
    printf("Mom will see the ball %d times\n", bouncingBall(3, 0.66, 1.5)); // expected = 3
    printf("Is the number prime? %s\n", is_prime(13) ? "YES" : "NO"); // expected = YES
    printf("Is the inputted string has valid parentheses format? %s\n", validParentheses(")") ? "True" : "False");
//    int array[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    printf("%d is the maximum sum of the inputted sequence of number\n",
            maxSequence((int[]){-2, 1, -3, 4, -1, 2, 1, -5, 4}, 9));
    uint32_to_ip(2149583361, output);
    printf("%lld, in in ipv4 si scrive: %s", 2149583361, output);
    return 0;
}
