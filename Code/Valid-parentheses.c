#include <stdbool.h>

bool validParentheses(const char* strin) {
    int i, size, open = 0, closed = 0;
    if(strin == NULL)
        return true;
    size = sizeof(strin) / sizeof(strin[0]);
    if(size<2)
        return true;
    for(i=0; i<size; i++){
        if(strin[i] == '(')
            open++;
        if(strin[i] == ')')
            closed++;
        if(closed > open)
            return false;
    }
    if(open != closed)
        return false;
    return true;
}
