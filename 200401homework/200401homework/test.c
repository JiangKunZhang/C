#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	//int arr[] = { 1, 2, 3, 4, 5 };
//	//short *p = (short*)arr;
//	//int i = 0;
//	//for (i = 0; i<4; i++)
//	//{
//	//	*(p + i) = 0;
//	//}
//
//	//for (i = 0; i<5; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//#include<stdio.h>
////使用指针打印数组内容
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (int i = 0; i < sz; i++){
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
////字符串逆序
//
//void reverse(char* arr, char* arr2, int len){
//	for (int i = 0; i < len; i++){
//		arr2[i] = arr[len - i - 1];
//	}
//}
//
//int main(){
//
//	char arr[100];
//	char arr2[100] = { '\0' };
//	gets(arr);
//	int len = strlen(arr);
//
//	reverse(arr, arr2, len);
//	printf("%s", arr2);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
////2+22+222+2222+22222
//int Sum(int a){
//	int sum = 0;
//	for (int i = 0; i < 5; i++){
//		sum = sum + a;
//		a = a * 10 + 2;
//	}
//	return sum;
//}
//
//int main(){
//
//	int a=0,sum=0;
//	scanf("%d", &a);
//	sum=Sum(a);
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
////求出0～100000之间的所有“水仙花数”并输出
//int len(int n){
//	int count = 0;
//	while (n){
//		count++;
//		n /= 10;
//	}
//	return count;
//}
//
//void Flower(){
//	for (int i = 0; i <= 100000; i++){
//		int number = i;
//		int sum = 0;
//		for (int j = 0; j < len(i); j++){
//			sum += pow(number % 10, len(i));
//			number /= 10;
//		}
//		if (sum == i){
//			printf("%d ", i);
//		}
//	}
//}
//
//int main(){
//
//	Flower();
//	//0 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474 54748 92727 93084
//
//	return 0;
//}

#include<stdio.h>
//打印菱形
void Print(){
	//7 * 7
	//上
	//行
	for (int i = 1; i <= 7; i++){
		//列
		for (int j = 1; j < 7 + 1 - i; j++){
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++){
			printf("*");
		}
		printf("\n");
	}
	//下
	//行
	for (int i = 6; i >= 1; i--){
		//列
		for (int j = 6 + 1 - i; j >= 1; j--){
			printf(" ");
		}
		for (int j = 2 * i - 1; j >= 1; j--){
			printf("*");
		}
		printf("\n");
	}
}

int main(){

	Print();
/*
	  *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
	  */

	return 0;
}