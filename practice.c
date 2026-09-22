#include <stdio.h>

int main() {
    float r;
    float h;
    float PI = 3.14159;
    printf("请输入半径和高\n"); 
    scanf("%f,%f", &r, &h); 
    printf("周长:%.5f,面积:%.5f,体积:%.5f\n", 2*PI*r, PI*r*r, PI*r*r*h);
    return 0;
}