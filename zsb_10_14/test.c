#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// 定义一个一维数组
//// 第一个值不变，后面每个乘10
//// 用指针
//void f(int arr[],int len) {
//	int* p;
//	for (p = arr;p < arr + len - 1;p++) {
//		*p *= 10;
//	}
//}
//
//int main() {
//	int arr[] = { 8,6,4,3,9,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr + 1;
//	f(p,len);
//	int i;
//	for (i = 0;i < len;i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//