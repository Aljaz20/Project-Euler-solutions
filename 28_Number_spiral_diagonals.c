#include <stdio.h>

int main(){
    long sum = 1;
    
    int spirala = 0;
    for(int i = 2; i <502; i++){
        spirala = i*2 -1;
        int kvadrat = spirala*spirala;
        int dif = spirala-1;
        for(int j = 0; j < 4; j++){
            sum += kvadrat - j*dif;
        }
        
    }
   

    printf("%ld", sum);

    
    return 0;
}