#include  <stdio.h>

int main() {
    int vsota =0;
    for(int i = 1; i < 1000; i++){
        if(i%3 == 0 || i%5 == 0){
            vsota = vsota + i;
        }
    }

    printf("%d", vsota);
    return 0;
}