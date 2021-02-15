#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//递归与迭代
//求n的阶乘
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("n!=%d\n", ret);
//
//	return 0;
//}
//描述第n个斐波那契数列
//int Fib1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}//使用递归会重复大量的运算，效率很低。。
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//
//	}
//	return c;
//}
//int main()//TDD -- 测试驱动开发（先写主函数）
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib2(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//数组
//一维数组的创建和初始化
//数组是一组相同类型的元素的集合
//数组的创建
//int main()
//{
//	int arr[10] = {1,2,3};//不完全初始化
//	char arr2[] = "abcdef";
//	printf("%d\n",sizeof(arr2));//7
//	//sizeof是计算数组所占空间的大小：7*1=7
//	printf("%d\n", strlen(arr2));//6
//	//strlen是求字符串长度，见到\0就停止，--6
//	
//	return 0;
//}
//strlen 和sizeof并没有什么关联
//strlen只能求字符串长度 -- 库函数  -- 使用时要引头文件
//sizeof是计算变量、数组、类型的大小，单位是字节 -- 操作符
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//
//	return 0;
//}
//一维数组的使用
//数组是下标访问的，下标是从0开始的
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int
	return 0;
}