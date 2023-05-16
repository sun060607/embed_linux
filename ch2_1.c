#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    if(mkdir("han",0755)==-1){
        perror("에러 상황은 : ");
        exit(-1);
    }
    printf("han디렉토리가 잘 만들어졌어요\n");
}