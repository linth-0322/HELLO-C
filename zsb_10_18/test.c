#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// 初识结构体
//// 写一个学生成绩排序，要求有学号，姓名，成绩，从高到低排序
//struct Student {
//	char name[20];
//	int num;
//	double score;
//};
//struct Student s[5] = { "张三",1,67,"李四",2,57, "小明",3,86,"王五",4,75,"小红",5,96 },t;
//
//int main() {
//	int i, j;
//	for (i = 0;i < 4;i++) {
//		for (j = 0;j < 4 - i;j++) {
//			if (s[j].score < s[j+1].score) {
//				t = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = t;
//			}
//		}
//	}
//	puts("学号\t姓名\t成绩");
//	for (i = 0;i < 5;i++) {
//		printf("%2d\t%s\t%.2f\n", s[i].num, s[i].name, s[i].score);
//	}
//	return 0;
//}


// 函数递归
//// 1.求n的阶乘
//int f(int n) {
//	if (n == 0)
//		return 1;
//	return n * f(n - 1);
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	int s = f(n);
//	printf("%d", s);
//	return 0;
//}

//// 2.顺序打印整数的每一位
//void f(int n) {
//	if (n > 9)
//		f(n / 10);
//	printf("%d ", n % 10);
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	f(n);
//	return 0;
//}

//// 3. 求第n个斐波那契数(递归）
//int f(int n) {
//	if (n == 0)
//		return 0;
//	if (n == 1)
//		return 1;
//	return f(n - 1) + f(n - 2);
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d", f(n));
//	return 0;
//}

// 求第n个斐波那契数(循环）
int f(int n) {
	int a = 0;
	int b = 1;
	int c = n;
	while (n >= 2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", f(n));
	return 0;
}