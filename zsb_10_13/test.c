#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int binarySeach(int arr[], int len, int num);
int main() {
	int arr[] = { 5,8,37,53,69.90 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int num = 37;
	int index = binarySeach(arr, len, num);
	printf("%d\n", index);
	return 0;
}

int binarySearch(int arr[], int len, int num)
{

}