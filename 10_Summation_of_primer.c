#include <stdio.h>
#include <math.h>

int main(){
    long temp1 = 2;
    long sum = 2;
    
    while(temp1 < 2000000){
        temp1 = temp1 +1;
        long temp2 = (long)sqrt(temp1);
        int prev = 1;
        for(long i = 2; i <= temp2+1; i++){
            if(temp1 % i == 0){
                prev = 0;
                break;
            }
        }
        if(prev == 1){
            sum = sum + temp1;
        }
    }

    printf("%ld", sum);
    return 0;
}
