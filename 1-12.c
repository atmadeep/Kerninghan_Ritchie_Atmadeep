#include <stdio.h>
#define IN 1
#define OUT 0
int main() {
   int c,state=OUT;
   while((c=getchar())!=EOF){
       if(c==' ' || c=='\t'|| c=='\n')
           state=OUT;
       else {
           state = IN;
           while(state==IN) {
               putchar(c);
               c=getchar();
               if(c==' ' || c=='\t'|| c=='\n')
                   state=OUT;
           }

       }

   }
}