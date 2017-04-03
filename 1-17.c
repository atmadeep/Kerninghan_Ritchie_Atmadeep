//
// Created by Aatmadeep Aarya on 020 20-Feb-17.
//
#include <stdio.h>
#define maxline 1000
int my_getline(char *, int );
void copy(char *, char *);
int main(){
    int len,max;
    char line[maxline],longest[maxline];
    max=0;
    while((len=my_getline(line, maxline)) > 0)
        if(len>80){
            max=len;
            copy(longest,line);
        }
    if(max>0)
        printf("%s",longest);
    return 0;
}
int my_getline(char line[],int max){
    int c,i;
    for ( i = 0; i <max-1 && (c=getchar())!=EOF && c!='\n' ; ++i) {
        line[i]=(char) c;}

    if(c=='\n')
        line[i++] = (char) c;
    line[i]='\0';
    return i;

}
void copy(char to[],char from[]){
    int i=0;
    while((to[i]=from[i]))
        i++;
}
