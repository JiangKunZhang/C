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
	//���ִ�������ķ�ʽ����������10��Ԫ�أ��ѵ�һ��Ԫ�س�ʼ��Ϊ0������Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	int arr1[] = { 0 };
	//���ִ�������ķ�ʽ����ֱ��ָ�������Ԫ�ظ���������������ݳ�ʼ�������ݣ���ָ��Ԫ�ظ���
	//��Ϊ{ }����ֻ��һ��0����������arr1����ֻ��1��Ԫ��

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr1));

	return 0;
}