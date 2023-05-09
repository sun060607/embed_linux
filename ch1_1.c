#include <stdio.h>
#include <unistd.h>
#include <errno.h>

extern int errno;

int main(){
    if(access("text.txt",F_OK)==-1){
        printf("errno=%d",errno);
    }
}