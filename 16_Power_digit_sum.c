#include <stdio.h>

int main(){

    int prenos = 0;
    int rezultat[305];
    rezultat[304] = 1;
    for(int i = 0; i < 304; i++){
        rezultat[i] = 0;
    }
    int temp = 0;
    for(int i = 0; i <1000; i++){
        prenos = 0;
        for(int j = 304; j>=0; j--){
            temp = prenos;
            temp = temp + rezultat[j]*2;
            prenos = temp / 10;
            rezultat[j] = temp%10;
        }
        
    }
    int rez = 0;

    for(int i = 0; i < 305; i++){
        rez = rez + rezultat[i];
    }

    printf("%d", rez);

    
    return 0;
}