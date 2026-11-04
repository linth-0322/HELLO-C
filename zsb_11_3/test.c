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


//// 复习随机数
//int main() {
//	srand((unsigned int)time(NULL));
//	int n = 1;
//	for (n = 1;n <= 10;n++) {
//		// [20-30]
//		printf("%d\n", rand()%11+20);
//	}
//}


// 1-99的同构数
// 5的平方是25，5是25右边的数，这种为同构数
int main() {
	int num, square;
	for (num = 1;num < 100;num++) {
		square = num * num;
		if (num < 10 && square % 10 == num) {
			printf("%d的平方是%d,是同构数\n", num,square);
		}
		else
			if (square % 100 == num) {
				printf("%d的平方是%d,是同构数\n", num,square);
			}
	}
	return 0;
}
