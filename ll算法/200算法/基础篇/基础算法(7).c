// 求一元二次方程实数根
#include<stdio.h>
#include<math.h>

int main(){
	double a,b,c,x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	double t = b * b - 4 * a * c;
	if(a != 0 && t >= 0){
		double p = -b + sqrt(t);
		double q = -b - sqrt(t);
		x1 = p / (2 * a);
		x2 = q / (2 * a);
		printf("方程的实数根为x1=%.2f,x2=%.2f\n",x1,x2);
	}else{
		printf("无实数根\n");
	}
	return 0;
}
