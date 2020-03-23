#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////猜数游戏
//void game(){
//	int guess = 0;
//	int ans = rand() % 100 + 1;
//	while (1){
//		printf("请输入猜的数字:");
//		scanf("%d", &guess);
//		if (guess > ans){
//			printf("大了\n");
//		}else if (guess < ans){
//			printf("小了\n");
//		}
//		else{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main(){
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do{
//		printf("输入“1”开始游戏，输入“0”结束游戏：");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

#include<stdio.h>
#include<string.h>
//二分查找
int main(){
	//二分查找
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	printf("请输入要查找的数：\n");
	scanf("%d", &k);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);

	while (left <= right){
		int mid = (left + right) / 2;
		if (arr[mid] > k){
			right = mid - 1;
		}
		else if (arr[mid] < k){
			left = mid + 1;
		}
		else{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	return 0;
}