#define _CRT_SECURE_NO_WARNINGS 1

//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, *p = &a;
//	a.a = 99;
//	printf("%d\n", a.a);
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },
//	{ 9802, "wang", 19 },
//	{ 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	return 0;
//}

#include<stdio.h>
//喝汽水问题
int main(){

	int drink = 1;
	int money = 20;
	int count = 0;
	count = money / drink;
	int empty = count;

	while (empty >= 2){
		//两个瓶子换一个
		count += empty / 2;
		//产生的新瓶
		//看一下换瓶子之后还有剩下的没
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", count);
	return 0;
}