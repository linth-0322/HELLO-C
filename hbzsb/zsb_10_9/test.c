#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// // 生成5-49的随机数；5+rand()%(49+1-5)
// int main(){
//     srand((unsigned int)time(NULL));
//     int i;
//     for(i=1;i<=10;i++){
//         int num = 5+rand()%45;
//         printf("%d ",num);
//     }
//     return 0;
// }


// // 用函数遍历数组
// void priarr(int arr[],int len);
// int main(){
//     int arr[]={5,3,8,2,9,3,5};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     printf("%d\n",len);
//     priarr(arr,len);
//     return 0;
// }

// void priarr(int arr[],int len)
// {
//     int i;
//     for(i=0;i<len;i++){
//         printf("\"%d\"\n",arr[i]);
//     }
// }


// // 数组求最值
// int main(){
//     int arr[] = {3,8,4,9,55,5};
//     int max = arr[0];
//     int index_max = 0;
//     int len = sizeof(arr) / sizeof(arr[0]);
//     for(int i = 0;i < len;i++){
//         if(max < arr[i]){
//             max = arr[i];
//             index_max = i;
//         }     
//     }
//     printf("%d %d\n",index_max,max);
//     return 0;
// }


// // 遍历数组求和（基础）
// // 生成10个1-100之间的随机数存入数组
// // 求出所有数的和
// int main(){
//     srand((unsigned int)time(NULL));
//     int arr[10] = {0};
//     int i;
//     for(i = 0;i < 10;i++){
//         arr[i] = 1 + rand() % 100;
//         printf("%d ",arr[i]);
//     }
//     int sum = 0;
//     for(i = 0;i < 10;i++)
//         sum += arr[i];
//     printf("\n%d\n",sum);
//     return 0;
// }


// 遍历数组求和（提高）
// 生成10个1-100之间的随机数存入数组
// 数组元素不能重复
// 求出所有数的和
// 求所有数据的平均数
// 求有多少数比平均数小
int con(int arr[],int len,int num);
int main(){
    srand((unsigned int)time(NULL));
    int arr[10] = {0};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i;
    for(i = 0;i < 10;i++){
        int num = 1 + rand() % 100;
        int flag = con(arr,len,num);
        if(!flag){
            arr[i] = num;
        }else{
            i -= 1;
        }
    }

    int sum = 0,n = 0;
    double pjs = 0.0;
    for(i = 0;i < 10;i++){
        printf("\'%d\' ",arr[i]);
        sum += arr[i];
    }
    pjs = 1.0 * sum / len;
    for(i = 0;i < 10;i++){
        if(arr[i] < pjs)
            n++;
    }
    printf("\n%d\n",sum);
    printf("%.2f\n%d\n",pjs,n);
    return 0;
}

int con(int arr[],int len,int num)
{
    int i;
    for(i = 0;i < len;i++){
        if(arr[i] == num)
            return 1;
    }
    return 0;
}