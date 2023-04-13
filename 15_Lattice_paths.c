#include <stdio.h>

long long int arr[21][21];

long long int path(int n, int m){
    if(n > m){
        if(arr[m][n] != 0){
            return arr[m][n];
        }
    }else if(m > n){
        if(arr[n][m] != 0){
            return arr[n][m];
        }
    }else{
        if(arr[n][n] != 0){
            return arr[n][n];
        }
    }
    if(n == 0 || m == 0){
        return 1;
    }
    else{
        long long int rez = path(n-1,m) + path(n, m-1);
        arr[n][m] = rez;
        return rez;
        
    }
}

int main(){
    printf("%lld\n", path(20,20));
    return 0;
}