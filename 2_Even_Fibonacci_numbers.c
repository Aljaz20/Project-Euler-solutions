#include <stdio.h>

int main() {
    int vsota = 0;
    int prva = 2;
    int druga = 1;

    while(prva < 4000000){
        if(prva % 2 == 0){
            vsota = vsota + prva;
        }
        int temp = prva + druga;
        druga = prva;
        prva = temp;
    }

    printf("%d", vsota);
    return 0;
}