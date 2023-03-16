#include <stdio.h>

int main(){
    long diff = 1;
    long sum = 0;
    long sqrsum = 0;
    for(long i = 1; i < 101; i++){
        sum = sum + i*i;
        sqrsum = sqrsum + i;
    }
    sqrsum = sqrsum * sqrsum;
    diff = sqrsum -sum;

    printf("%ld", diff);
    return 0;
}
