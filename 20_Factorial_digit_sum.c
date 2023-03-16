#include <stdio.h>

int main(){

    int prenos = 0;
    int rezultat[160];
    rezultat[159] = 1;
    for(int i = 0; i < 159; i++){
        rezultat[i] = 0;
    }
    int temp = 0;
    for(int i = 1; i <101; i++){
        prenos = 0;
        for(int j = 159; j>=0; j--){
            temp = prenos;
            temp = temp + rezultat[j]*i;
            prenos = temp / 10;
            rezultat[j] = temp%10;
        }
        
    }
    int rez = 0;

    for(int i = 0; i < 160; i++){
        rez = rez + rezultat[i];
    }

    printf("%d", rez);

    
    return 0;
}