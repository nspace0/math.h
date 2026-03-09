#include "s21_math.h"

int s21_abs(int x){
    return x < 0 ? -x : x;   
}


int main(){
    int m;
    scanf("%d", &m);
    printf("%d", s21_abs(m));
    return 0;
}