#include<stdio.h>
int main(){
    int c;
    while((c=getchar())!=EOF) {
        if(c==' '){
            putchar(c);
            c=getchar();
            while (c == ' ') {
                c = getchar();
            }}
        putchar(c);
    }

    return 0;

}