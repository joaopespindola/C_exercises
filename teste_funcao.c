#include <stdio.h>

float media(float a, float b){
    float z=(a+b)/2.0;
    return z;
}

int main(){
    float x, y;

    scanf("%f %f", &x, &y);

    printf("%.2f\n", media(x, y));
}