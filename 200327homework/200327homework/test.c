#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
////ʵ��һ�������������ð������
//void BubbleSort(int a[], int len){
//
//	for (int i = 0; i < len - 1; i++){
//		int flag = 1;
//		for (int j = 0; j < len - 1 - i; j++){
//			if (a[j]>a[j + 1]){
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//				flag = 0;
//			}
//			if (flag == 1){
//				break;
//			}
//		}
//	}
//}
//
//int main(){
//
//	int a[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int len = sizeof(a) / sizeof(a[0]);
//	BubbleSort(a, len);
//	for (int i = 0; i < len; i++){
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//
//void init(int arr[],int len){
//	memset(arr, 0, len * sizeof(int));
//}
//
//void print(int arr[], int len){
//	for (int i = 0; i < len; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int *arr, int len){
//	int * left = arr;
//	int * right =  arr+len - 1;
//	while (left < right){
//		int temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main(){
//	//����һ������
//	int arr[10];
//	//���㳤��
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//��ʼ��
//	init(arr,len);
//	print(arr, len);
//	//��ֵ�����Ƿ���ʵ������
//	for (int i = 0; i < len; i++){
//		arr[i] = i + 1;
//	}
//	print(arr, len);
//	//ʵ������
//	reverse(arr,len);
//	print(arr, len);
//	return 0;
//}

//#include<stdio.h>
////������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void print(int a[], int len){
//	for (int i = 0; i < len; i++){
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int a[], int b[], int len){
//	for (int i = 0; i < len; i++){
//		int temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//
//int main(){
//
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int b[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int len = sizeof(a) / sizeof(a[0]);
//	print(a, len);
//	print(b, len);
//	reverse(a, b, len);
//	print(a, len);
//	print(b, len);
//	return 0;
//}

//ɨ��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//9*9-EASY_COUNT = 71
	while (win<row*col - EASY_COUNT)
	{
		printf("�������Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��ע�⣬���������������룡\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}
void menu()
{
	printf("*************************\n");
	printf("****    1. play      ****\n");
	printf("****    0. exit      ****\n");
	printf("*************************\n");
}

void game()
{
	//��Ų��úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//'0' - ������
	//����Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//'*' - ����-δ�Ų�
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}