#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//写一个函数，判断一个数是否为素数
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
//	printf("\n总共有%d个素数\n", count);
//	return 0;
//}
//判断是否是闰年
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
//二分查找
//在一个有序数组中查找具体的某个数
//如果找到了，返回下标；找不到，返回-1

//int binary_search(int arr[], int k, int sz)//形参和实参名字相同没有影响
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//错误！！！传递过来的arr[]是数组arr首元素的地址，-- 本质上，这里的arr是一个指针
//	//主动传送进去sz
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
//		printf("找不到指定的数字");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//写一个函数，每调用一次这个函数，就会将num的值增加1.
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
//函数的嵌套调用和链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	//printf()返回的是字符的个数
//	return 0;
//}
