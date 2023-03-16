#include <stdio.h>

int main() {
    int sum = 0;
    
    for(int i = 3; i < 2540160; i++){
        int stevilka = 0;
        int temp = i;
        while(temp > 0){
            int t= temp%10;
            int sum1 = 1;
            while(t>0){
                sum1=sum1*t;
                t--;
            }
            stevilka = stevilka + sum1;
            temp = temp/ 10;
        }
        if(stevilka == i){
            sum = sum + i;
        }
    }

    printf("%d", sum);
    return 0;
}