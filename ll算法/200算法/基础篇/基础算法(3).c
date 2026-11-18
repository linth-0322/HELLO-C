#include<stdio.h>

int main(){
	double n;
	scanf("%lf",&n);
	if(n>=0&&n<=100){
		if(n>=90)
			printf("A\n");
		else if(n>=80)
			printf("B\n");
		else if(n>=70)
			printf("C\n");
		else if(n>=60)
			printf("D\n");
		else
			printf("E\n");
	}
	else
		printf("成绩无效\n");
	return 0;
}
