#include <stdio.h>

int main(){
    int max = 28124;
    int jeabduntnumber(int n);
    long long int sum = 0;
    int abdunum[6965];
    int count = 0;
    int preveri = 0;
    for(int i = 1; i < max; i++){
        if(jeabduntnumber(i) == 1){
            abdunum[count] = i;
            //printf("%d---\n", i);
            count++;
        }
    }

    //not very optimised but it works
    for(int i = 1; i < max; i++){
        preveri = 0;
        for(int j = 0; j < 6964; j++){
            if(abdunum[j] > i){
                break;
            }
            for(int k = j; k < 6964; k++){
                if(abdunum[j] + abdunum[k] == i){
                    preveri = 1;
                    break;
                }
                if(abdunum[j] + abdunum[k] > i){
                    break;
                }
            }
            if(preveri == 1){
                break;
            }
        }
        if(preveri == 0){
            //printf("%d\n", i);
            sum += i;
        }
    }


    printf("%lld", sum);
    return 0;
}

int jeabduntnumber(int n){
    int sum = 0;
    for(int i = 1; i <= n/2; i++){
        if(n%i == 0){
            sum += i;
            //printf("%d\n", i);
        }
    }
    if(sum > n){
        return 1;
    }
    return 0;
}