#include<stdio.h>
int main(){
    int c;
    while((c=getchar())!=EOF) {
        switch (c){
            case 9:printf("\\t");
                break;
            case 32:printf("\\b");
                break;
            case 92:printf("\\");
                break;
            default:putchar(c);
        }
    }
    return 0;
}