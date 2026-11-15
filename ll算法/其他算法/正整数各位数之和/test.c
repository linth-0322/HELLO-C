#include<stdio.h>

int main(){
	int a,sum = 0;
	printf("请输入一个正整数：");
	scanf("%d",&a);
	while(a){
		int d = a % 10;
		sum += d;
		a /= 10;
	}
	printf("%d\n",sum);
	return 0;
}
