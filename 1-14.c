//
// Created by Aatmadeep Aarya on 018 18-Feb-17.
//
#include <stdio.h>
#define max 40
int my_getline(char line[],int lim);
int main(){
    char line[max];
    int count_char=0,i=0,j,k,len;

    len= my_getline(line, max);
    printf("length of respective words:\n");
    printf("  ");
    for (int l = 0; l < len; ++l) {
        printf("-");
    }
    for ( i=0;i<len-1;i++) {
        count_char=0;
        for ( j = i; line[j] ; ++j) {
            if(line[i]==line[j])
                count_char++;
        }
        for ( k = 0; line[i]!=line[k] ; ++k) ;
        if(k==i && line[i]!=' '){
            printf("\n%c ",line[i]);
            for (int m = 0; m <count_char ; ++m) {
                printf("-");
            }

        }
    }
    printf("\n  ");
    for (int l = 0; l < len; ++l) {
        printf("-");
    }
    return 0;
}
int my_getline(char *line, int lim) {
    int i,c;
    for ( i = 0; i <lim-1 && (c=getchar())!=EOF && c!='\n' ; ++i)
        line[i]=(char) c;

    line[++i]='\0';
    return i;
}
