//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
////三种方法实现了strlen:1,计数器，2,递归,3,指针-指针
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
//
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
////指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	//[a][b][c][\0]
//	printf("%d\n", len);
//	return 0;
//}

#include<stdio.h>
#include<assert.h>
//模拟实现库函数strlen
int my_strlen(const char* str){
	int count = 0;
	assert(str != NULL);
	while (*str != '\0'){
		count++;
		str++;
	}
	return count;
}


int main(){


	char arr[] = "abcdefg";
	printf("%d\n", my_strlen(arr));


	return 0;
}