#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
////ģ��ʵ�ֿ⺯��strlen
//int my_strlen(const char* str){
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0'){
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main(){
//
//	char arr[] = "abcdefg";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dest, const char* src){
//	char* ret = dest;
//	//����
//	assert(dest != NULL);
//	assert(src != NULL);
//	//���п���
//	while (*dest++ = *src++){
//		;
//	}
//
//	//����Ŀ�ĵ�ַ����ʼ��ַ
//	return ret;
//}
//
//int main(){
//	char dest[] = "aaaaaaa";
//	char src[] = "bbbbbb";
//	printf("%s\n", my_strcpy(dest, src));
//
//	return 0;
//}

#include<stdio.h>
#include<assert.h>
//��������ż��˳��
int* my_sort(int* arr,int left,int right){
	int* ret = arr;
	int temp = 0;
	assert(arr != NULL);

	while (left < right){
		//�����±������������������ұ�����ֱ������ż��Ϊֹ	
		while ((left < right)&&(arr[left]%2==1)){
			left++;
		}
		//�����±�����ż�����������������ֱ����������Ϊֹ
		while ((left < right) && (arr[right] % 2 == 0)){
			right--;
		}
		//����<�ң�����������ұ�ż�����н���
		if (left < right){//��֤��ÿһ���±������������ʹ�ý�����������������Ա���һЩ��������ķ���
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
	return ret;
}

void print(const int * arr, const int len){
	for (int i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	print(arr, len);
	print(my_sort(arr, 0, len - 1), len);
	return 0;
}