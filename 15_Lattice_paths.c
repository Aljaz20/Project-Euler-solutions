#include <stdio.h>


int main(){
    long long int sum = 1;
    int matrika = 20;
    int temp = 1;

    //Formula: (number of steps)!/(n!*(number of steps - n)!)

    for(int i = matrika +1; i <= matrika*2; i++){
        sum *= i;
        sum /= temp;
        temp++;
    }


    printf("%lld", sum);
    return 0;
}
