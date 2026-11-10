#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//// 字符串与指针的运用
//int main() {
//	char str[] = "abcde";
//	char* p = str;
//	printf("%s\n", p); // abcde
//	printf("%s\n", p + 2); // cde
//	return 0;
//}


//// 字符串复制的函数编写(下标）
//void Mystrcat(char s1[], char s2[]) {
//	int i=0, j=0;
//	// 找串1的结束标志
//	while (s1[i] != '\0') {
//		i++;
//	}
//	// 字符串复制
//	while (s2[j] != '\0') {
//		s1[i] = s2[j];
//		i++;
//		j++;
//	}
//	s1[i] = '\0';
//}
//
//int main() {
//	char s1[20] = "abcde";
//	char s2[20] = "qwer";
//	Mystrcat(s1, s2);
//	puts(s1);
//	return 0;
//}

//// 字符串复制的函数编写(指针)
//void Mystrcat(char *p1, char *p2) {
//	// 找串1的结束标志
//	while (*p1 != '\0') {
//		p1++;
//	}
//	// 字符串复制
//	while (*p2 != '\0') {
//		*p1 =*p2;
//		p1++;
//		p2++;
//	}
//	*p1 = '\0';
//}
//
//int main() {
//	char s1[20] = "abcde";
//	char s2[20] = "qwer";
//	Mystrcat(s1, s2);
//	puts(s1);
//	return 0;
//}


// 字符串比较函数
int Mystrcmp(char* p1, char* p2) {
	while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
		p1++;
		p2++;
	}
	return *p1 - *p2;
}

int main() {
	char s1[] = "abCd";
	char s2[] = "abSd";
	int t = Mystrcmp(s1, s2);
	if (t > 0) {
		printf("%s>%s\n", s1, s2);
	}
	else if (t < 0) {
		printf("%s<%s\n", s1, s2);
	}
	else
		printf("%s=%s\n", s1, s2);
	return 0;
}