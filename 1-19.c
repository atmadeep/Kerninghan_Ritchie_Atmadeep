#include <stdio.h>
#include "custom.h"
#define maxline 50

long int htoi(char s[],int len);
int my_getline(char line[],int max);
int power(int base, int exp);

int main(){
    char line[maxline];
    int len = my_getline(line,maxline);
    while(len > 0){
        printf("hex value is = %li\n",htoi(line,len));
        len = my_getline(line,maxline);
    }
    return 0;
}



