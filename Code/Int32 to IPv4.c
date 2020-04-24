#include <inttypes.h>
#include <math.h>
#define LEN 32

int* from_dec_to_bin(long long dex){

    int *bin = malloc(sizeof(int) * LEN);
    int i, tmp;
    for(i=0; i<LEN; i++){
        bin[i] =  dex%2;
        dex /= 2;
    }
    return bin;
}


void uint32_to_ip(uint32_t ip, char *output){
    int *bin  = from_dec_to_bin(ip);
    int ipv4[4], i, j, tmp;
    for(i=0; i<4; i++){
        for(j=0, tmp=0; j<8; j++){
            tmp += bin[i*8 + j] * pow(2, j);
        }
        ipv4[i] = tmp;
    }
    sprintf(output, "%d.%d.%d.%d", ipv4[3], ipv4[2], ipv4[1], ipv4[0]);
}

