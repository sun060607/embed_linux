#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    if(rmdir("han")==-1){
        perror("에러 발생\n");
        exit(-1);
    }
    printf("제거의 성공하였어요\n");
}