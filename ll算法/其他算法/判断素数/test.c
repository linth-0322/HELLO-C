#include<stdio.h>

//判断素数
int main(){
	int m,i;
	scanf("%d",&m);
	for(i=2;i<m;i++){
		if(m%i==0)
			printf("no\n");
			break;
	}
	if(i==m){
		printf("YES\n");
	}
	
	return 0;
}
