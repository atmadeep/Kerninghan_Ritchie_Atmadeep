#include <stdio.h>
void squezze(char s[],char c[]);
int main(){
    char s[50],a[5];
    fgets(s,50,stdin);
    fgets(a,4,stdin);
    squezze(s,a);
    printf("%s",s);
    return 0;
}
void squezze(char *s, char *c) {
    int i,j,k;
    for ( k = 0; c[k] ; ++k) {
        i=j=0;
        while(s[i]){
            if(s[i]!=c[k])
                s[j++]=s[i];
            i++;
        }
        s[j]='\0';

    }
}
