/*
*/
#include <stdio.h>

int s21_abs(int x){
    return x < 0 ? -x : x;   
}


int main(){
    int m;
    scanf("%d", &m);
    printf("%d", s21_abs(m));
    return 0;
}
abs fabs floor ceil fmod sqrt exp log pow sin cos tan atan asin acos