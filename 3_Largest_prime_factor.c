#include <stdio.h>

int main() {
    long max = 1;
    long stevilo = 600851475143;
    for(long i = 1; i <= stevilo; i++){
        if(stevilo % i == 0){
            max = i;
            stevilo = stevilo / i;
        }
    }

    printf("%ld", max);
    return 0;
}