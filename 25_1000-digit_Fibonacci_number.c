#include <stdio.h>

int main(){
    int count = 2;
    int prenos = 0;
    int rezultat[3][1000];
    for(int j = 0; j<3; j++){
        for(int i = 0; i < 1000; i++){
            rezultat[j][i] = 0;
        }
    }
    int temp = 0;
    rezultat[0][999] = 1;
    rezultat[1][999]=1;
    while(rezultat[1][0] == 0){
        prenos = 0;
        for(int j = 999; j>=0; j--){
            temp = prenos;
            temp = temp + rezultat[0][j] + rezultat[1][j];
            prenos = temp / 10;
            rezultat[2][j] = temp%10;
            rezultat[0][j] = rezultat[1][j];
            rezultat[1][j] = rezultat[2][j];
        }

        count++;
        
    }
    

    

    printf("%d", count);

    
    return 0;
}