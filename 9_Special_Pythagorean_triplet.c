#include <stdio.h>
#include <math.h>

int main(){
    int c = 1;
    int prev = 1;
    for(int i = 1; i < 500; i ++){
        for(int j = 1; j < 500; j++){
            c = (int)sqrt(i*i +j*j);
            if(c*c == i*i + j*j){
                if(i+j+c == 1000){
                    printf("%d", i*j*c);
                    prev = 0;
                    break;
                }
            }
        }
        if(prev == 0){
            break;
        }
    }

    
    return 0;
}
