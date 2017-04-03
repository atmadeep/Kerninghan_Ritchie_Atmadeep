//
// Created by Aatmadeep Aarya on 018 18-Feb-17.
#include <stdio.h>
float fahr_to_celsius(float fahr){
    float celsius = (float) ((5.0 / 9.0) * (fahr - 32.0));
    return celsius;
}
float celsius_to_fahr(float celsius){
    float fahr = (float) ((9.0 / 5.0) * celsius + 32.0);
    return fahr;
}
int main(){
    float fahr,celsius;
    int lower =0,upper = 300,step =20;
    celsius=fahr=lower;
    printf("Celsius values    fahrenheit values\n");
    printf("(0<fahr<300)      (0<celsius<300)\n");
    while(fahr<upper && celsius <upper){
        printf("    %1.3f",fahr_to_celsius(celsius));
        printf("         %1.3f\n",celsius_to_fahr(fahr));
        fahr+=step;
        celsius+=step;
    }
    return 0;
}