// Created by Aatmadeep Aarya on 008 08-Feb-17.
//
#include<stdio.h>
int main(){
    float fahr, celcius;
    int lower, upper, step;
    lower=0;
    upper=300;
    step=20;
    celcius = upper;
    printf("clecius fahr\n");
    while(celcius>=lower){
        fahr= (float) ((9.0 / 5.0) * celcius + 32.0);
        printf("%3.0f  %6.1f\n",celcius,fahr);
        celcius-=step;
    }
    return 0;
}


