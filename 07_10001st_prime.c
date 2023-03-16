#include <stdio.h>
#include <math.h>

int main(){
    long prast = 13;
    long temp1 = 13;
    int count = 6;
    
    while(count != 10001){
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
            prast = temp1;
            count = count +1;
        }
    }

    printf("%ld", prast);
    return 0;
}
