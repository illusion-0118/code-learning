#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
//������ϰ
//
//�Ӵ�С���������ֵ
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
//��ӡ1~100֮��3�ı���
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
//�������������Լ��
//շת�����
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
//��ӡ1000~2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//д��һ
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
//		//д����
//		/*if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d\n", year);
//			count++;
//		}*/
//	}
//	printf("�ܹ���%d�����\n", count);
//
//	return 0;
//}
//��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//ż��������������
//	for (i = 101; i <= 200; i+=2)//��������ż��
//	{
//		//�����жϹ���
//		//1���Գ��� -- �ô��������µ��������Գ��������
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
//		//���Ż�(�Գ���������)
//		/*int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt -- ��ƽ���Ŀ⺯��
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
//	printf("�ܹ���%d������\n", count);
//
//	return 0;
//}
//����������n�־��硷
//
//��д���룬��һ��1~100���������г����˶��ٴ�����9
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
//������ͣ�����1/1-1/2+1/3-...+1/99-1/100��ֵ������ӡ��
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
//�����ֵ -- ��10�������е����ֵ
//int main()
//{
//	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };*/
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//ע�ⲻҪ��0��max�����⸺������Ȼ����arr[����]�����ԡ�
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (max <= arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵ��%d\n", max);
//	return 0;
//}
//��ӡ�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//i��������
//	{
//		//ÿ��ѭ����ӡһ��
//		int j = 1;
//		for (j = 1; j <= i; j++)//j��������
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);//%2d��%-2d���Ա�������û�ж���
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//��������Ϸ
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
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;
//	//ʱ�������ǰ�������ʱ�䡪���������ʼʱ�䣨1970.1.1 00��00��00��=������������
//	//��ʱ����������������������ʼ��
//	//time����
//	//time_t time(time_t*timer)
//	//time_t
//
//	ret = rand()%100+1;//����1~100֮��������
//	//printf("\n%d\n\n\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("\n\n������100���ڣ�������������֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("\n�´���\n");
//		else if (guess < ret)
//			printf("\n��С��\n");
//		else
//		{
//			printf("\n\n\n��ϲ�㣬�¶��ˣ���\n\n\n\n\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("��ѡ��1��0����");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}
//
//goto ���
//int main()
//{
//again:
//	printf("hello XJTU!!!\n");
//	goto again;
//	return 0;
//}
//goto ������ʺϵĳ������������Ƕ�׽ṹ
//дһ���ػ�����
//cmd
//command
//int main()
//{
//	//shutdown -s -t 60
//	//system() - ִ��ϵͳ����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬���ĵ��Խ���һ���Ӻ�رգ�\n�����Ҫ��ֹ�Զ��ػ��������룺������\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���
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
//����
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
//memset --mem�ڴ� set����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//���庯��
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
//дһ�����������������ͱ��������ݣ���Ҫ�õ�ָ�룩
void Swap1(int x, int y)//������ʵ�ֽ���
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int* pa, int* pb)//����ָ��Զ�̽��գ����Խ���
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
//����ʵ�ʲ�������ʽ����
//��ʽ����ֻ�ں�������Ч��������ɺ�������ˡ�
//ʵ�ʲ��������ǳ��������������ʽ�������ȡ��ڽ��к�������ʱ����Ҫ��ȷ����ֵ���Ա����Щֵ���͸��βΡ�
//��ʵ�δ����βε�ʱ����ʵ�β���ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�εģ������Swap1û�гɹ���ԭ�� -- ��ֵ����
//Swap2���͵��ǵ�ַ�����Կ��Գɹ� -- ��ַ����
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