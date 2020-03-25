#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
////不定义临时变量完成字符串长度计算
//int my_strlen(char* str){
//	if (*str != '\0'){
//		return 1 + my_strlen(str + 1);
//	}
//	else{
//		return 0;
//	}
//}
//
//int main(){
//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	int arr3[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", sizeof(arr2)/sizeof(arr[0]));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", sizeof(arr3));
//	printf("%d\n", sizeof(arr3)/sizeof(arr3[0]));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	return 0;
//}

//#include<stdio.h>
//
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main(){
//
//	printf("%d\n", Fun(2));
//	return 0;
//}

//#include<stdio.h>
////打印一个数的每一位
//void print(unsigned int n){
//	if (n > 9){
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main(){
//	unsigned int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//#include<stdio.h>
////递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//int Fac(int n){
//	if (n <= 1){
//		return 1;
//
//	}
//	else{
//		return n * Fac(n - 1);
//	}
//
//}
//int main(){
//
//	int a = 0;
//	int res = 1;
//	scanf("%d", &a);
//	printf("递归实现：%d\n", Fac(a));
//	for (int i = 1; i <= a; i++){
//		res = res*i;
//	}
//	printf("非递归实现：%d\n", res);
//	return 0;
//}

//#include<stdio.h>
////递归和非递归分别实现strlen
//
////递归实现
//int my_strlen1(char* str){
//	if (*str != '\0'){
//		return 1 + my_strlen1(str + 1);
//	}
//	else{
//		return 0;
//	}
//}
////非递归实现
//int my_strlen2(char* str){
//	int count = 0;
//	while (*str != '\0'){
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main(){
//
//	char arr[] = "bit";
//	int len1 = my_strlen1(arr);
//	int len2 = my_strlen2(arr);
//	printf("递归实现:%d\n", len1);
//	printf("非递归实现:%d\n", len2);
//
//	return 0;
//}

//#include<stdio.h>
////字符串逆序（递归实现）
//void reverse_string(char* string){
//	if (*string){
//		reverse_string(string + 1);
//		printf("%c", *string);
//	}
//}
//int main(){
//	char arr[] = "bitbit";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
////计算一个数的每位之和（递归实现）
//int s = 0;
//int DigitSum(unsigned int n){
//	
//	if (n > 9){
//		DigitSum(n / 10);
//	}
//	s = s + (n % 10);
//	return s;
//}
//
//int main(){
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", DigitSum(a));
//	return 0;
//}

//#include<stdio.h>
////递归实现n的k次方
//int fun(int n, int k){
//	if (k > 1){
//		return n*fun(n,k-1);
//	}
//	else{
//		return n;
//	}
//}
//
//int main(){
//	int n = 0, k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d\n", fun(n, k));
//
//	return 0;
//}

#include<stdio.h>
//递归和非递归分别实现求第n个斐波那契数
//递归实现
int Fib1(int n){
	if (n > 2){
		return Fib1(n - 1) + Fib1(n - 2);
	}
	else{
		return 1;
	}
}
//非递归实现
int Fib2(int n){
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2){
		c = a + b;
		a = b;
		b = c;
		n--;

	}
	return c;
}

int main(){
	int n = 0;
	scanf("%d", &n);
	printf("递归实现:%d\n", Fib1(n));
	printf("非递归实现:%d\n", Fib2(n));

	return 0;
}