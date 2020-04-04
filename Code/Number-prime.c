#include <stdbool.h>

bool is_prime(int num)
{
    int i;
    if(num<=1)
        return false;
    for(i=2; i<=num/2; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}
