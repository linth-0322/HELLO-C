#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 二分查找
int binarySeach(int arr[], int len, int num);
int main() {
	int arr[] = { 53,59,61,63,65,67,69 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int num;
	scanf("%d", &num);
	int index = binarySeach(arr, len, num);
	printf("%d %d", index, arr[index]);
	return 0;
}

int binarySeach(int arr[], int len, int num) 
{
	int min = 0;
	int max = len - 1;
	while (min <= max) {
		int mid = (min + max) / 2;
		// while (min <= max && num >= arr[min] && num <= arr[max])
		// int mid = min + (num - arr[min]) * (max - min) / (arr[max] - arr[min]); 插值查找
		if (arr[mid] < num)
			min = mid + 1;
		else if (arr[mid] > num)
			max = mid - 1;
		else
			return mid;
		
	}
	return -1;
}