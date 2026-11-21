// 输入年月日，计算是一年中的第几天
#include<stdio.h>

int main(){
	int year,month,day;
	int sum=0;
	int flag=0;
	scanf("%d%d%d",&year,&month,&day);
	if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		flag = 1;
	switch(month){
		case 12: sum+=30;
		case 11: sum+=31;
		case 10: sum+=30;
		case 9: sum+=31;
		case 8: sum+=31;
		case 7: sum+=30;
		case 6: sum+=31;
		case 5: sum+=30;
		case 4: sum+=31;
		case 3: sum+=(flag?29:28);
		case 2: sum+=31;
		case 1: sum+=day;
	}
	printf("%d年%d月%d日是%d年的第%d天\n",year,month,day,year,sum);
	return 0;
}
