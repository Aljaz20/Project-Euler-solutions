#include <stdio.h>

int main(){
    int stevilka;
    int maxdolzina;

    for(int i = 2; i < 1000000; i++){
        int dolzina = 0;
        unsigned int temp = i;
        while(temp != 1){
            if(temp % 2 == 0){
                temp /= 2;
            }else{
                temp = 3*temp + 1;
            }
            dolzina++;
        }
        if(dolzina > maxdolzina){
            maxdolzina = dolzina;
            stevilka = i;
        }
    }

    printf("%d", stevilka);
    return 0;
}