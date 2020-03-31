#include <ctype.h>

char* test1 = "abcde";
char* test2 = "aabbcde";
char* test3 = "aabBcde";
char* test4 = "indivisibility";
char* test5 = "Indivisibilities";
char* test6 = "aA11";
char* test7 = "ABBA";

int char_in_array(char c, char *array, int lenght){
    int i;
    for(i=0; i<lenght; i++){
        if(c == array[i])
            return 1;
    }
    return 0;
}

int duplicate_count (const char *text) {

    int lenght=0, n_occs=0, n_counted=0, i;
    char c;
    while((c=text[lenght])!='\0'){
        lenght++;
    }
    char occs[lenght], counted[lenght];
    for(i=0; i<lenght; i++) {
        occs[i] = ' ';
        counted[i] = ' ';
    }

    for(i=0; i<lenght; i++){
        c = tolower(text[i]);
        if(!char_in_array(c, occs, n_occs)){
            occs[n_occs]  = c;
            n_occs ++;
        }
        else{
            if(!char_in_array(c, counted, n_counted)) {
                counted[n_counted] = c;
                n_counted++;
            }
        }
    }
    return n_counted;
}