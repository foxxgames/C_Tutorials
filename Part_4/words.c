#include<stdio.h>

#define IN 1
#define OUT 0

int main(){
    int c = 0;
    int nl = 0;
    int nw = 0;
    int nc = 0;
    int state = 0;

    state = OUT;
    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n'){
            ++nl;
        }
        if ( c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }
        else if (state == OUT){
            state == IN;
            ++nw;
        }
    }
}