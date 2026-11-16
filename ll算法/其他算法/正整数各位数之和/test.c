#include<stdio.h>

int main(){
	int n,sum = 0;
	scanf("%d",&n);
	while(n){
		int d = n % 10;
		sum += d;
		n /= 10;
	}
	printf("%d\n",sum);
	return 0;
}
