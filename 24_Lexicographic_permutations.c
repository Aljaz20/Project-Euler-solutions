#include <stdio.h>

int main(){

    int ste(int stevilka);
    long int koncna = 0;
    int sum = 0;
    int tabela[10] = {0,1,2,3,4,5,6,7,8,9};

    for(int i = 9; i >= 0; i--){
        int count = 0;
        while(sum < 1000000){
            sum += ste(i);
            count++;
        }
        sum -= ste(i);
        printf("%d\n", count);
        int temp = 0;
        for(int j = 0; j < count; j++){
            if(tabela[j] == -1){
                count++;
                continue;
            }
            temp = tabela[j];
        }
        tabela[temp] = -1;
        printf("%d\n", temp);
        koncna = koncna * 10 + temp;
    }
    printf("%ld", koncna);
    return 0;
}

int ste(int stevilka){
    int stev = 1;
    for(int i = stevilka; i > 0; i--){
        stev *= i;
    }
    return stev;
}