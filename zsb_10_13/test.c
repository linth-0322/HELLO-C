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