#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src){
	char* ret = dest;
	//����
	assert(dest != NULL);
	assert(src != NULL);
	//���п���
	while (*dest++ = *src++){
		;
	}

	//����Ŀ�ĵ�ַ����ʼ��ַ
	return ret;
}

int main(){
	char dest[] = "aaaaaaa";
	char src[] = "bbbbbb";
	printf("%s\n", my_strcpy(dest, src));

	return 0;
}