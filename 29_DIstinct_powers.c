#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    long double* tab = (long double*)calloc((99*99), sizeof(long double));

    int count = 1;
    tab[0] = 4;
    for(int i = 2; i < 101; i++){
        for(int j = 2; j < 101; j++){
            long double st = (long double) pow(i,j);
            int je = 1;
            for(int l = 0; l < count; l++){
                if(tab[l] == st){
                    je = 0;
                    break;
                }
            }
            if(je==1){
                tab[count] = st;
                count++;
            }
        }
    }


    printf("%d", count);
    return 0;
}