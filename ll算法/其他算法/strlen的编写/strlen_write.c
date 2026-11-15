#include<stdio.h>

// strlen的编写

//// 1.调用库函数
//#include<string.h>
//int main(){
//	char arr[] = "abcde";
//	int len = strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

//// 2. 用指针计数
//int my_strlen(char* p){
//	int count = 0;
//	while(*p){
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main(){
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

// 3.用末指针-首指针
int my_strlen(char* p){
	char* p1 = p;
	char* p2 = p;
	while(*p2){
		p2++;
	}
	return p2-p1;
}

int main(){
	char arr[] = "abcdefg";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}

