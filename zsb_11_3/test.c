#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//// 求最大公约数和最小公倍数
//int main() {
//	int m, n, r;
//	scanf("%d%d", &m, &n);
//	if (m < n) {
//		int t = m;
//		m = n;
//		n = t;
//	}
//	r = m % n;
//	int p = m * n;
//	while (r) {
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	printf("最大公约数：%d，最小公倍数：%d\n", n, p / n);
//	return 0;
//}


// 复习随机数
int main() {
	srand((unsigned int)time(NULL));
	int n = 1;
	for (n = 1;n <= 10;n++) {
		// [20-30]
		printf("%d\n", rand()%11+20);
	}
}
