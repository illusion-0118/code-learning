#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//�ݹ������
//��n�Ľ׳�
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
//������n��쳲���������
//int Fib1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}//ʹ�õݹ���ظ����������㣬Ч�ʺܵ͡���
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
//int main()//TDD -- ����������������д��������
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib2(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����
//һά����Ĵ����ͳ�ʼ��
//������һ����ͬ���͵�Ԫ�صļ���
//����Ĵ���
//int main()
//{
//	int arr[10] = {1,2,3};//����ȫ��ʼ��
//	char arr2[] = "abcdef";
//	printf("%d\n",sizeof(arr2));//7
//	//sizeof�Ǽ���������ռ�ռ�Ĵ�С��7*1=7
//	printf("%d\n", strlen(arr2));//6
//	//strlen�����ַ������ȣ�����\0��ֹͣ��--6
//	
//	return 0;
//}
//strlen ��sizeof��û��ʲô����
//strlenֻ�����ַ������� -- �⺯��  -- ʹ��ʱҪ��ͷ�ļ�
//sizeof�Ǽ�����������顢���͵Ĵ�С����λ���ֽ� -- ������
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
//һά�����ʹ��
//�������±���ʵģ��±��Ǵ�0��ʼ��
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int
	return 0;
}