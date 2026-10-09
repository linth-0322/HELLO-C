#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 生成5-49的随机数；5+rand()%(49+1-5)
int main(){
    srand((unsigned int)time(NULL));
    int i;
    for(i=1;i<=10;i++){
        int num = 5+rand()%45;
        printf("%d ",num);
    }
    return 0;
}