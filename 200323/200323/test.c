#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////������Ϸ
//void game(){
//	int guess = 0;
//	int ans = rand() % 100 + 1;
//	while (1){
//		printf("������µ�����:");
//		scanf("%d", &guess);
//		if (guess > ans){
//			printf("����\n");
//		}else if (guess < ans){
//			printf("С��\n");
//		}
//		else{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main(){
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do{
//		printf("���롰1����ʼ��Ϸ�����롰0��������Ϸ��");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

#include<stdio.h>
#include<string.h>
//���ֲ���
int main(){
	//���ֲ���
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	printf("������Ҫ���ҵ�����\n");
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
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	return 0;
}