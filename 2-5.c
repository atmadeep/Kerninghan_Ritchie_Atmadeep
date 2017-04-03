#include <stdio.h>

int any(char s[], char c[]);
int main(){
    char s[50],a[5];
    fgets(s,50,stdin);
    fgets(a,4,stdin);
    printf("%d",any(s,a));
    return 0;
}

int any(char *s, char *c) {
    int i,k;
    for ( k = 0; c[k] ; ++k) {
        i=0;
        while(s[i]){
            if(s[i]==c[k])
                return 1;
            i++;
        }
    }
    return 0;
}
