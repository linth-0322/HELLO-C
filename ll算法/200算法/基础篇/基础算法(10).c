// 分段函数
#include<stdio.h>
#include<math.h>

int main(){
	double x,y;
	scanf("%lf",&x);
	if(x<=-2)
		y=-1*exp(2*x+1)+3;
	else if(x>2&&x<=3)
		y=2*x-1;
	else
		y=2*log10(3*x+5)-11;
	printf("y的值为%.2f\n",y);
	return 0;
}
