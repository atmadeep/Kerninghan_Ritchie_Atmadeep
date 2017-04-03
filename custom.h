#ifndef KERNINGHAN_RITCHIE_ATMADEEP_CUSTOM_H
#define KERNINGHAN_RITCHIE_ATMADEEP_CUSTOM_H

#include <stdio.h>
unsigned getbits(unsigned int x, int p, int n) {
    return ((x>>p+1-n) & ~(~0<<n));
}
int my_getline(char line[],int max){
    int c,i;
    for ( i = 0; i <max-1 && (c=getchar())!=EOF && c!='\n' ; ++i)
        line[i]=(char) c;

    if(c=='\n')
        line[i++] = (char) c;
    line[i]='\0';
    return i;

}
int power(int base,int exp){
    int p=1;
    while(exp>0){
        p=p*base;
        exp--;
    }
    return p;
}
void showbits(unsigned int x) {
    int n;
    while (power(2, n) <= x)
        n++;
    n--;
    while (n >= 0) {
        printf("%d", (x >> n--) & 1);
    }
    printf("\n");
}
void invert(unsigned int x){
    int n=0,i;
    while(power(2,n)<=x)
        n++;
    for ( i = 0; i <n ; ++i) {
        printf("%d",~(x>>(n-1-i) & 01)+2);
    }
}
long int htoi(char *s,int len) {
    long int hex=0;
    int i=0,buffer=0;
    if(s[0]=='0' && (s[1]=='x' || s[1]=='X'))
        i=2;
    while(s[i]!='\n') {
        if(s[i] >= '0' && s[i] <='9')
            buffer=s[i]-'0';
        if(s[i] >= 'a' && s[i] <= 'f')
            buffer = s[i]-'a'+10;
        if(s[i] >= 'A' && s[i] <= 'F')
            buffer = s[i]-'A'+10;

        hex+= buffer * power(16,len-2-i);
        i++;
    }
    return hex;
}
#endif //KERNINGHAN_RITCHIE_ATMADEEP_CUSTOM_H
