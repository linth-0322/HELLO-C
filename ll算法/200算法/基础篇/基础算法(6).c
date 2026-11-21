// 三角形海伦公式求面积
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a + b > c && a + c > b && b + c > a){
		double p = (a+b+c)/2;
		// p*(p-a)(p-b)(p-c) = t;
		double t = p*(p-a)*(p-b)*(p-c);
		double s = sqrt(t);
		printf("三角形的面积s=%.2f\n",s);
	}else{
		printf("输入的边不构成三角形\n");
	}
	return 0;
}
