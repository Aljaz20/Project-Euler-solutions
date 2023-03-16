#include <stdio.h>
#include <math.h>

int main() {
    
    long long int reverse(long long int stevilka);
    int jepalindrom(long long int stevilka);
    int jereverprastevilo(long long int stevilo, int tabela[]);

    long long int sum = 0;
    int count = 2;
    int tabela[2000000];
    
    tabela[0] = 2;
    tabela[1] = 3;
    int zaporedna = 0;
    long long int temp = 1;

    //Napolni tabelo s prastevili
    for(int i = 5; count < 2000000; i++){
        int prever = 0;
        int koren = (int) sqrt(i);
        for(int j = 0; tabela[j] < koren +1; j++){
            if(i % tabela[j] == 0){
                prever = 1;
                break;
            }
        }
        if(prever == 0){
            tabela[count] = i;
            count++;
        } 
    }


    for(int i = 0; zaporedna < 50; i++){
        long long int st = temp * tabela[i];
        st *= tabela[i];
        long long int rever = reverse(st);
        if(jepalindrom(st) == 0 && jereverprastevilo(rever, tabela) == 1){
            sum += st;
            zaporedna++;
            printf("stevilka:%lld  reverse:%lld   zaporedna:%d   v tabeli: %d\n", st, rever, zaporedna, i);
        }
        

    }
    printf("%lld  %d\n", sum, zaporedna);
    return 0;
}

long long int reverse(long long int stevilka){
    long long int reverse = 0;
    while (stevilka > 0){
        reverse = reverse*10 + stevilka%10;
        stevilka /= 10;
    }
    return reverse;
}

int jepalindrom(long long int stevilka){
    int dolzina = 0;
    long long int temp = stevilka;
    long long int st = 0;
    while(temp > 0){
        st = st * 10 + temp%10;
        temp = temp /10;
        dolzina++;
    }
    dolzina /= 2;
    while(dolzina>0){
        stevilka /= 10;
        st /= 10;
        dolzina--;
    }
    if(stevilka == st){
        return 1;
    }else{
        return 0;
    }
}

int jereverprastevilo(long long int stevilo, int tabela[]){
    long long int koren = round(sqrt(stevilo));
    if(koren*koren == stevilo){
        int i = 0;
        while(koren >= tabela[i]){
            if(koren == tabela[i]){
                return 1;
            }
            i++;
        }
    }
    return 0;
}
