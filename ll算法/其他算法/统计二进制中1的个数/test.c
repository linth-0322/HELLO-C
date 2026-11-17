#include<stdio.h>
// 计算整数二进制中1的个数

//// 法1 每次都需要循环32次，效率偏低
//int main(){
//	unsigned int n;
//	scanf("%d",&n);
//	int i,count = 0;
//	for(i=0;i<32;i++){
//		if(((n >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}

//// 法2 使用 n = n & (n-1);每次会让n二进制最右边的1消失
//int main(){
//	unsigned int n;
//	int count = 0;
//	scanf("%d",&n);
//	while(n){
//		count++;
//		n = n & (n - 1);
//	}
//	printf("%d",count);
//	return 0;
//}

//// 法3 统计二进制中的1，除以2，余数是1，就++
//int main(){
//	unsigned n;
//	int count = 0;
//	scanf("%d",&n);
//	while(n){
//		if(n % 2 == 1){
//			count++;
//		}
//		n /= 2;
//	}
//	printf("%d",count); 
//	return 0;
//}


//// 变形，判断n是不是2的幂次方数
//int main(){
//	int n;
//	scanf("%d",&n);
//	if((n!=0) && ((n&(n-1)) == 0))
//		printf("%d是2的幂次方数\n",n);
//	return 0;
//}
