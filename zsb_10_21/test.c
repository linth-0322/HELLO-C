#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// // 1-1000的完数：不是1也不是它本身的正整数
// // 例如：6=1+2+3
//int main() {
//	int n,i;
//	for (n = 6;n <= 1000;n++) {
//		int sum = 0;
//		for (i = 1;i < n;i++) {
//			if (n % i == 0) {
//				sum += i;
//			}	
//		}
//		if (n == sum)
//			printf("%d ", n);
//	}
//	return 0;
//}

// 1.输入成绩，到负数停止输入
// 2.排序
//void f(double a[], int len);
//int main() {
//	double a[20];
//	int i = 0;
//	double x;
//	scanf("%lf", &x);
//	while(x >= 0){
//		a[i] = x;
//		i++;
//		scanf("%lf", &x);
//	}
//	f(a,i);
//	return 0;
//}
//void f(double a[],int len) {
//	int i, j;
//	for (i = 0;i < len-1;i++) {
//		for (j = 0;j < len - i - 1;j++) {
//			if (a[j] < a[j + 1]) {
//				double t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0;i < len;i++) {
//		printf("%.2f ", a[i]);
//	}
//}