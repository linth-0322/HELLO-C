#include<stdio.h>

// 求最大公约数
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<b){
		int t=a;
		a=b;
		b=t;
		}
	printf("%d %d\n",a,b);
	int c = a % b;
	while(c){
		a=b;
		b=c;
		c=a%b;
	}
	printf("最大公约数是%d\n",b);
	return 0;
}
