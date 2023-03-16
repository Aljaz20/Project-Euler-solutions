#include <stdio.h>

int main(){
    int leto = 1900;
    int dan = 1;
    int mesec = 1;
    int count = 0;

    int mesci[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int danvtednu = 1;

    for(mesec; mesec <=12; mesec++){
        dan = 1;
        for(dan; dan <= mesci[mesec-1]; dan++){
            danvtednu = danvtednu %8;
            if(danvtednu == 0){
                danvtednu= 1;
            }
            danvtednu++;
        }
    }
    leto++;

    for(leto; leto <=2000; leto++){
        mesec = 1;
        if(leto % 4 == 0){
            mesci[1] = 29;
        }else{
            mesci[1] = 28;
        }
       for(mesec; mesec <=12; mesec++){
        dan = 1;
        if(danvtednu == 7){
            count++;
            printf("%d.%d.%d - %d\n",leto, mesec, dan, danvtednu);

        }
        for(dan; dan <= mesci[mesec-1]; dan++){
            danvtednu = danvtednu %8;
            if(danvtednu == 0){
                danvtednu= 1;
            }
            danvtednu++;
        }
    } 
    }

    printf("%d", count);
    return 0;
}