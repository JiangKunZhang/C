#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main(){
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF){
//		if (ch<'A' || ch>'Z'){
//			continue;
//		}
//		putchar(ch);
//	}
//
//	return 0;
//}

int main(){

	int arr[10] = { 0 };
	//这种创建数组的方式，是数组有10个元素，把第一个元素初始化为0，其余元素默认初始化为0
	int arr1[] = { 0 };
	//这种创建数组的方式，不直接指定数组的元素个数，次数数组根据初始化的内容，来指定元素个数
	//因为{ }里面只有一个0，所以数组arr1里面只有1个元素

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr1));

	return 0;
}