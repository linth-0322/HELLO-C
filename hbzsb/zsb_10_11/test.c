#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// 顺序查找
//int order(int a[], int len, int num);
//int main(){
//	int a[] = { 5,7,2,6,8 };
//	int len = sizeof(a) / sizeof(a[0]);
//	int num = 6;
//	int index = order(a, len, num);
//	printf("%d", index);
//	return 0;
//}
//
//int order(int a[], int len, int num)
//{
//	int i;
//	for (i = 0;i < len;i++) {
//		if (a[i] == num)
//			return i;
//	}
//	return -1;
//}

// 选择排序
int main() {
	int a[] = { 77,8,26,44,54,85,32,2,5,97 };
	int len = sizeof(a) / sizeof(a[0]);
	int i;
	for (i = 0;i < len - 1;i++) {
		int j;
		for (j = i + 1;j < len;j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
	}
	for (i = 0;i < len;i++)
		printf("%d ", a[i]);
	return 0;
}