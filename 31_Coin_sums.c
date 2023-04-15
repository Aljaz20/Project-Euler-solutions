#include <stdio.h>

int tabela[8] = {1,2,5,10,20,50,100,200};

int prestej(int znesek, int stevilo){
    if(znesek == 0){
        return 1;
    }
    if(znesek < 0){
        return 0;
    }
    if(stevilo == 8){
        return 0;
    }
    return prestej(znesek - tabela[stevilo], stevilo) + prestej(znesek, stevilo + 1);
}

int main(){
    int znesek;
    double cena;
    scanf("%lf", &cena);
    znesek = (int) (cena * 100);
    printf("%d\n", prestej(znesek, 0));
    return 0;
}
