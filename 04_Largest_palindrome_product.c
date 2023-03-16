#include <stdio.h>

int main(){

    int najvecja = 10000;
    int temp1 = 1;
    int temp2 = 1;

    for (int i = 100; i <1000; i++){
        for(int j = i; j < 1000; j++){
            int zmnozek = i * j;
            temp2 = (zmnozek % 10)*100 + ((zmnozek % 100)/10)*10 + ((zmnozek % 1000)/100);
            if(zmnozek < 100000){
                temp1 = zmnozek / 100;
            }else{
                temp1 = zmnozek / 1000;
            }
            if((temp1 == temp2) && (zmnozek > najvecja)){
                najvecja = zmnozek;
            }
        }
    }

    printf("%d", najvecja);





    return 0;
}