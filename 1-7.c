#include<stdio.h>
int main(){
    int c,nl,nt,nb;
    nl=nt=nb=0;
    while((c=getchar())!=EOF){
        if(c==' ')
            nl++;
        if(c=='\t')
           nt++;
            nb++;
        putchar(c);
    }
}
