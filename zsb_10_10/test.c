#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//// 数组里加入10个随机数，且不能重复
//int con(int arr[], int len, int num);
//int main() {
//	srand((unsigned int)time(NULL));
//	int i;
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < len;i++) {
//		int num = 1 + rand() % 100;
//		int flag = con(arr, len, num);
//		if (!flag) {
//			arr[i] = num;
//		}
//		else {
//			i -= 1;
//		}
//		
//	} 
//	for (i = 0;i < len;i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int con(int arr[], int len, int num)
//{
//	int i;
//	for (i = 0;i < len;i++) {
//		if (arr[i] == num)
//			return 1;
//	}
//	return 0;
//}


//// 反转数组
//int main() {
//	int a[6] = { 9,4,6,2,7,53 };
//	int i, j;
//	for (i = 0;i < 6;i++) {
//		printf("%d ", a[i]);
//	}
//	i = 0;
//	j = 5;
//	while (i < j) {
//		int temp = a[i];
//		a[i] = a[j];
//		a[j] = temp;
//		i++;
//		j--;
//	}
//	printf("\n");
//	for (i = 0;i < 6;i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//// 打乱数组的顺序
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	srand((unsigned int)time(NULL));
//	int i;
//	for (i = 0;i < len;i++) {
//		int index = rand() % 5;
//		int temp = arr[i];
//		arr[i] = arr[index];
//		arr[index] = temp;
//	}
//	for (i = 0;i < len;i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// 顺序查找
int order(int arr[], int len, int num);
int main() {
	int arr[] = { 7,4,83,76,22 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int num = 76;
	int index = order(arr, len, num);
	printf("%d", index);
	return 0;
}

int order(int arr[], int len, int num)
{
	int i;
	for (i = 0;i < len;i++) {
		if (arr[i] == num) {
			return i;
		}
	}
	return -1;
}