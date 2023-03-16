#include <stdio.h>
#include <math.h>

int main() {
    int stevilka = 1;
    int count = 0;

    for(int i = 2; i > 0; i++){
        stevilka += i;
        count = 0;
        int koren = (int) sqrt(stevilka);
        for(int j = 1; j < koren; j++){
            if(stevilka % j == 0){
                count++;
            }
        }
        count = count *2;
        if(koren*koren == stevilka){
            count++;
        }
        if(count > 500){
            printf("%d", stevilka);
            break;
        }
    }

    return 0;
}