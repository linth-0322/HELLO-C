#include<stdio.h>

// 判断回文数
int main(){
	int n,m = 0;
	scanf("%d",&n);
	int t = n;
	while(t){
		int d = t % 10;
		m = m * 10 + d;
		t /= 10;
	}
	if(m == n){
		printf("%d是回文数\n",n);
	}
	return 0;
}
