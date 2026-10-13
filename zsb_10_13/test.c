#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// 插值查找
//// 要求查找的数列是有序分布
//int interpolationSearch(int arr[], int len, int num);
//int main() {
//	int arr[] = { 5,8,11,14,17.20 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int num = 8;
//	int index = interpolationSearch(arr, len, num);
//	printf("%d\n", index);
//	return 0;
//}
//
//int interpolationSearch(int arr[], int len, int num)
//{
//	int min = 0, max = len - 1;
//	while (min <= max && num >= arr[min] && num <= arr[max]) {
//		int mid;
//		mid = min + (num - arr[min]) * (max - min) / (arr[max] - arr[min]);
//		if (arr[mid] < num) {
//			min = mid + 1;
//		}
//		else if (arr[mid] > num) {
//			max = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}


// 交换两个数

//// 1.传值调用
//int main() {
//	int a = 7, b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}


//// 传址调用
//int main() {
//	int a = 7, b = 5;
//	int* x = &a, * y = &b;
//	*x = *x + *y;
//	*y = *x - *y;
//	*x = *x - *y;
//	printf("%d %d", a, b);
//	return 0;
//}


// 指针在函数中的调用
void swap(int* x, int* y) {
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

int main() {
	int a = 20, b = 10;
	swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}