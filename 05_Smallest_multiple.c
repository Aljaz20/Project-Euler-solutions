#include <stdio.h>

int main(){
    int min = 1;
    for(int i = 2; i < 20; i++){
        if(gcd(min, i) == i){
            continue;
        }
        min = (min * i ) /gcd(min, i);
    }

    printf("%d", min);
    return 0;
}

int gcd(int prva, int druga){
    if(druga == 0){
        return prva;
    }
    return gcd(druga, prva%druga);
}