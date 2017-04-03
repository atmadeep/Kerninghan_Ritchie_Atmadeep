#include <stdio.h>
int main(){
    int c,nl,nt,nb;
    nl=nt=nb=0;
    while((c=getchar())!=EOF)    {
        if (c == '\n')
            ++nl;
        if(c==' ')
            nb++;
        if(c=='\t')
            nt++;
    }
        printf("\nlines = %d tabs = %d blanks = %d\n",nl,nt,nb);
    return 0;
}
