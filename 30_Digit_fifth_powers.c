#include <stdio.h>

int main() {
    int sum = 0;
    
    for(int i = 2; i < 355000; i++){
        int stevilka = 0;
        int temp = i;
        while(temp > 0){
            int t= temp%10;
            stevilka = stevilka + t*t*t*t*t;
            temp = temp/ 10;
        }
        if(stevilka == i){
            sum = sum + i;
        }
    }

    printf("%d", sum);
    return 0;
}