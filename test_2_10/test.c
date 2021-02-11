#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
//代码练习
//
//从大到小输出三个数值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d" , &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//打印1~100之间3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//求两个数的最大公约数
//辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 1;
//	scanf("%d%d",&m,&n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//
//	}
//	printf("%d\n",n);
//	return 0;
//}
//打印1000~2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//写法一
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//
//		else if (year % 400 == 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}*/
//		//写法二
//		/*if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d\n", year);
//			count++;
//		}*/
//	}
//	printf("总共有%d个年份\n", count);
//
//	return 0;
//}
//打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//偶数不可能是素数
//	for (i = 101; i <= 200; i+=2)//跳过所有偶数
//	{
//		//素数判断规则？
//		//1·试除法 -- 拿此数字以下的数字来试除这个数字
//		/*int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d\n", i);
//			count++;
//		}*/
//		//·优化(试除次数减少)
//		/*int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt -- 开平方的库函数
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			printf("%d\n", i);
//			count++;
//		}*/
//	}
//	printf("总共有%d个素数\n", count);
//
//	return 0;
//}
//《素数求解的n种境界》
//
//编写代码，数一下1~100所有整数中出现了多少次数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//
//	}
//	printf("%d\n", count);
//	return 0;
//}
//分数求和，计算1/1-1/2+1/3-...+1/99-1/100的值，并打印。
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//求最大值 -- 求10个整数中的最大值
//int main()
//{
//	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };*/
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//注意不要赋0给max，避免负数。当然，赋arr[任意]都可以。
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (max <= arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值是%d\n", max);
//	return 0;
//}
//打印乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//i控制行数
//	{
//		//每次循环打印一行
//		int j = 1;
//		for (j = 1; j <= i; j++)//j控制列数
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);//%2d和%-2d可以避免上下没有对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//猜数字游戏
//void menu()
//{
//	printf("###########################\n");
//	printf("####1.play#######0.exit####\n");
//	printf("###########################\n");
//}
////RAND_MAX -- 0~32767
//
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;
//	//时间戳：当前计算机的时间—计算机的起始时间（1970.1.1 00：00：00）=（···）秒
//	//拿时间戳来设置随机数的生成起始点
//	//time函数
//	//time_t time(time_t*timer)
//	//time_t
//
//	ret = rand()%100+1;//生成1~100之间的随机数
//	//printf("\n%d\n\n\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("\n\n请输入100以内，你所猜想的数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("\n猜大了\n");
//		else if (guess < ret)
//			printf("\n猜小了\n");
//		else
//		{
//			printf("\n\n\n恭喜你，猜对了！！\n\n\n\n\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请选择1或0！！");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}
//
//goto 语句
//int main()
//{
//again:
//	printf("hello XJTU!!!\n");
//	goto again;
//	return 0;
//}
//goto 语句最适合的场景是跳出深度嵌套结构
//写一个关机程序
//cmd
//command
//int main()
//{
//	//shutdown -s -t 60
//	//system() - 执行系统命令
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，您的电脑将在一分钟后关闭，\n如果想要终止自动关机，请输入：我是猪\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串
//	{
//		system("shutdown -a");
//	}
//	elsej 
//	{
//		goto again;
//	}
//	return 0;
//}
//
//函数
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "XJTU";
//	char arr2[] = "#########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//memset --mem内存 set设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//定义函数
//int get_max(int x, int y)
//{
//	if (x <= y)
//		return y;
//	else
//		return x;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//写一个函数交换两个整型变量的内容（需要用到指针）
void Swap1(int x, int y)//并不能实现交换
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int* pa, int* pb)//利用指针远程接收，可以交换
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
//区别：实际参数与形式参数
//形式参数只在函数中有效，调用完成后就销毁了。
//实际参数可以是常量、变量、表达式、函数等。在进行函数调用时，都要有确定的值，以便把这些值传送给形参。
//当实参传给形参的时候，其实形参是实参的一份临时拷贝
//对形参的修改是不会改变实参的，这就是Swap1没有成功的原因 -- 传值调用
//Swap2传送的是地址，所以可以成功 -- 传址调用
int main()
{
	/*int a = 3;
	int b = 5;
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;*/
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);

	Swap2(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}