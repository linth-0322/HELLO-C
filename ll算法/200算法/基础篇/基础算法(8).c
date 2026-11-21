// 已知每年生产总值增长8%，n年后增长多少百分比
#include<stdio.h>
#include<math.h>

int main(){
	int n;
	double t;
	scanf("%d",&n);
	t = pow((1+0.08),n);
	double p = (t-1)*100;
	printf("%d年后增长了%.2f%%\n",n,p);
	return 0;
}
