#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//дһ���������ж�һ�����Ƿ�Ϊ����
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//
//	}
//	printf("\n�ܹ���%d������\n", count);
//	return 0;
//}
//�ж��Ƿ�������
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}
//���ֲ���
//��һ�����������в��Ҿ����ĳ����
//����ҵ��ˣ������±ꣻ�Ҳ���������-1

//int binary_search(int arr[], int k, int sz)//�βκ�ʵ��������ͬû��Ӱ��
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//���󣡣������ݹ�����arr[]������arr��Ԫ�صĵ�ַ��-- �����ϣ������arr��һ��ָ��
//	//�������ͽ�ȥsz
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//дһ��������ÿ����һ������������ͻὫnum��ֵ����1.
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}
//������Ƕ�׵��ú���ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	//printf()���ص����ַ��ĸ���
//	return 0;
//}
