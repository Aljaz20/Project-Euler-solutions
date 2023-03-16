#include <stdio.h>

int main() {
    int dolzina = 0;
    int stevile[] = {3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
    int desetice[] = {6,6,5,5,5,7,6,6,7,8};

    int dolzinaenic = 0;
    for(int i = 0; i < 9; i++){
        dolzinaenic += stevile[i];
    }
    int dolzinadosto = 0;
    for(int i = 0; i < 19; i++){
        dolzinadosto += stevile[i];
    }
    for(int i = 0; i < 8; i++){
        dolzinadosto = dolzinadosto + 10*desetice[i] + dolzinaenic;
    }
    for(int i = 0; i < 9; i++){
        dolzina = dolzina + (stevile[i] + desetice[8])*100 + dolzinadosto + 297;
    }
    dolzina = dolzina + stevile[0] + desetice[9] + dolzinadosto;

    printf("%d", dolzina);
    return 0;
}