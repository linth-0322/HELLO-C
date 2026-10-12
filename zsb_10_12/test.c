#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// 二分查找
//int binarySeach(int arr[], int len, int num);
//int main() {
//	int arr[] = { 53,59,61,63,65,67,69 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int num;
//	scanf("%d", &num);
//	int index = binarySeach(arr, len, num);
//	printf("%d %d", index, arr[index]);
//	return 0;
//}
//
//int binarySeach(int arr[], int len, int num) 
//{
//	int min = 0;
//	int max = len - 1;
//	while (min <= max) {
//		int mid = min + (max - min) / 2;
//		// while (min <= max && num >= arr[min] && num <= arr[max])
//		// int mid = min + (num - arr[min]) * (max - min) / (arr[max] - arr[min]); 插值查找
//		if (arr[mid] < num)
//			min = mid + 1;
//		else if (arr[mid] > num)
//			max = mid - 1;
//		else
//			return mid;
//		
//	}
//	return -1;
//}


// 指针的交换数字

//// 只能交换p,q的地址，并没有改变a,b的值
//int main() {
//	int a = 6, b = 4;
//	int* p = &a, * q = &b, * t;
//	t = p;
//	p = q;
//	q = t;
//	printf("%d %d\n", a, b);
//	printf("%d %d\n", *p, *q);
//	return 0;
//}

// 给t增加一个地址，让t不是一个野指针
//int main() {
//	int a = 6, b = 4,c;
//	int* p = &a, * q = &b, * t = &c;
//	*t = *p;
//	*p = *q;
//	*q = *t;
//	printf("%d %d\n", a, b);
//	printf("%d %d\n", *p, *q);
//	return 0;
//}
