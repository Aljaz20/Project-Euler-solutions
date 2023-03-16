#include <stdio.h>

int main(){

    int sum = 0;
    int jeAmidnum(int stevilka);

    for(int i = 2; i < 10000; i++){
        if(jeAmidnum(i) == 1){
            sum += i;
            printf("%d\n", i);
        }
    }

    printf("%d", sum);
    return 0;
}

int jeAmidnum(int stevilka){
    int sum = 0;
    for(int i = 1; i <= stevilka/2; i++ ){
        if(stevilka%i == 0){
            sum += i;
        }
    }

    int sum2 = 0;
    for(int i = 1; i <= sum/2; i++ ){
        if(sum%i == 0){
            sum2 += i;
        }
    }

    if(sum2 == stevilka  && sum!= stevilka){
        return 1;
    }
    return 0;
}