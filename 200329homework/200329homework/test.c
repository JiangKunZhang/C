#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	printf("%d\n", i);
//	printf("%d\n", sizeof(i));
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//#include<stdio.h>
////���������������в�ͬλ�ĸ���
//int main(){
//
//	int a = 1999;
//	int b = 2299;
//	int count = 0;
//	while (a != 0 || b != 0){
//		if ((a & 1) != (b & 1)){
//			count++;
//		}
//		a = a >> 1;
//		b = b >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
////��ӡ���������Ƶ�����λ��ż��λ
//int main()
//{
//	int arr[32] = { 0 };
//	int x = 0, i = 0, count = 0;
//	printf("������һ��ʮ������:\n");
//	scanf("%d", &x);
//	for (i = 0; x != 0; i++){
//		arr[i] = x % 2;
//		x = x / 2;
//		count = i;
//	}
//	printf("����λ:\n");
//	for (i = 31; i >= 0; i = i - 2){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 30; i >= 0; i = i - 2){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
////ͳ�ƶ�������1�ĸ���
//int main(){
//
//	int n = 15;
//	int count = 0;
//	while (n != 0){
//		if (n&1){
//			count++;
//		}
//		n = n >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}

#include<stdio.h>
//����������������������ʱ������
int main(){

	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d %d\n", a, b);
	return 0;
}