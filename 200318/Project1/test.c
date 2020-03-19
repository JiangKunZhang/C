//#include <stdio.h>
//
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	
//	printf("%d",func(1));
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//#include<stdio.h>
//从大到小
//void swap(int *a, int *b){
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int main(){
//
//	int a, b, c;
//	
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b){
//		swap(&a, &b);
//	}
//	if (a < c){
//		swap(&a, &c);
//	}
//	if (b < c){
//		swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//三的倍数
//int main(){
//	for (int i = 0; i < 100; i++){
//		if (i % 3 == 0){
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main(){
//	//最大公约数
//	int a, b, t;
//	scanf("%d%d", &a, &b);
//	if (a < b){
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (b != 0){
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
////闰年
//int main(){
//	int year = 0;
//	for (year = 1000; year <= 2000; year++){
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

#include<stdio.h>
//100-200素数

int main(){

	int i, j;
	for (i = 100; i <= 200; i++){
		for (j = 2; j < i; j++){
			if (i%j == 0){
				break;
			}
		}
		if (j >= i){
			printf("%d ", i);
		}
	}

	return 0;
}