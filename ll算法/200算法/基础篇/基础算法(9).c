// 求球的体积 v=4/3*3.14*r*r*r
#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(){
	double r;
	scanf("%lf",&r);
	double p = 3.14;
	double v = (4.0/3.0)*PI*pow(r,3);
	printf("半径为%.2f的球体积为%.2f\n",r,v);
	return 0;
}
