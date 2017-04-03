#include <stdio.h>

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
    while(exp > 0){
        p*=base;
        exp--;
    }
    return p;
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
