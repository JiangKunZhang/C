#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src){
	char* ret = dest;
	//断言
	assert(dest != NULL);
	assert(src != NULL);
	//进行拷贝
	while (*dest++ = *src++){
		;
	}

	//返回目的地址的起始地址
	return ret;
}

int main(){
	char dest[] = "aaaaaaa";
	char src[] = "bbbbbb";
	printf("%s\n", my_strcpy(dest, src));

	return 0;
}