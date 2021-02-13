#include <stdio.h>
#include <string.h>
#include <math.h>
////////////////////////////////////////
//递归
//最简单的递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}//error：stack overflow -- 栈溢出
//栈区 --局部变量，函数形参
//堆区 --动态开辟的内存，malloc，calloc
//静态区 --全局变量，static修饰的变量
//
//递归的必要条件：
//1·存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2·每次递归调用之后越来越接近这个限制条件。
//
//接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4.
//void print(n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//print(1234)
//	//print(123)4
//	//print(12)3 4
//	//print(1)2 3 4
//	return 0;
//}
//编写函数，求字符串的长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "XJTU" };
//	//intlen = strlen(arr);//求字符串长度
//	//printf()；
//	//
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}
//如果不允许创建临时变量(count)呢？
//int my_strlen(char* str)
//{
//	//总是判断第一个字符是否为“\0”，如果不是，剥离出来，如此递归
//	if (*str != '\0')
//		return 1 + my_strlen(1 + str);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = { "XJTU" };
//
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}
